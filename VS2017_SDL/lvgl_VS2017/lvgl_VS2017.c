#include <stdlib.h>
#if !defined _WIN32
#include <unistd.h>
#else
#include <stdio.h>
#include <string.h>
#include <windows.h>
#endif
#include <string.h>
#include <SDL.h>
#include <lvgl.h>
#include "lv_drivers/display/monitor.h"
#include "lv_drivers/indev/mouse.h"

static void hal_init(void);
static int tick_thread(void *data);

int main(int argc, char** argv)
{
	/*Initialize LittlevGL*/
	lv_init();

	/*Initialize the HAL for LittlevGL*/
	hal_init();

	lv_test_group_1();

	while (1)
	{
		/* Periodically call the lv_task handler.
		* It could be done in a timer interrupt or an OS task too.*/
		lv_task_handler();
		Sleep(1);       /*Just to let the system breathe */
	}
	return 0;
}


/**
* Initialize the Hardware Abstraction Layer (HAL) for the Littlev graphics library
*/
static void hal_init(void)
{
	/* Add a display
	* Use the 'monitor' driver which creates window on PC's monitor to simulate a display*/
	monitor_init();
	lv_disp_drv_t disp_drv;
	lv_disp_drv_init(&disp_drv);            /*Basic initialization*/
	disp_drv.disp_flush = monitor_flush;
	disp_drv.disp_fill = monitor_fill;
	disp_drv.disp_map = monitor_map;
	lv_disp_drv_register(&disp_drv);

	/* Add the mouse (or touchpad) as input device
	* Use the 'mouse' driver which reads the PC's mouse*/
	mouse_init();
	lv_indev_drv_t indev_drv;
	lv_indev_drv_init(&indev_drv);          /*Basic initialization*/
	indev_drv.type = LV_INDEV_TYPE_POINTER;
	indev_drv.read = mouse_read;         /*This function will be called periodically (by the library) to get the mouse position and state*/
	lv_indev_drv_register(&indev_drv);

	/* If the PC keyboard driver is enabled in`lv_drv_conf.h`
	* add this as an input device. It might be used in some examples. */
#if USE_KEYBOARD
	lv_indev_drv_t kb_drv;
	kb_drv.type = LV_INDEV_TYPE_KEYPAD;
	kb_drv.read = keyboard_read;
	kb_indev = lv_indev_drv_register(&kb_drv);
#endif

	/* Tick init.
	* You have to call 'lv_tick_inc()' in every milliseconds
	* Create an SDL thread to do this*/
	SDL_CreateThread(tick_thread, "tick", NULL);
}

/**
* A task to measure the elapsed time for LittlevGL
* @param data unused
* @return never return
*/
static int tick_thread(void *data)
{
	while (1) {
		lv_tick_inc(1);
		SDL_Delay(1);   /*Sleep for 1 millisecond*/
	}

	return 0;
}
