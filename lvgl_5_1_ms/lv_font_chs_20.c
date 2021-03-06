/*
* lv_font_chs_20.c
*
*  Created on: 2018年3月28日
*      Author: Lyndon
*/
#include <stdint.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

#include "lvgl/lvgl.h"



/* GB2323 [A1, F7][A1, FE]，Trajan pro */


typedef struct _tagStCHS_20
{
	uint16_t u16MachineCode;
	const char c8FontArr[((20 + 7) / 8) * 20];
#ifdef _WIN32
	uint32_t u32Tmp[2];
#endif
}StCHS_20;


const StCHS_20 stCHS_20_20_B0A1 =
{
	0xB0A1,
	{
		0x00, 0x00, 0x00,
		0x03, 0xff, 0xe0,
		0x7f, 0x60, 0xc0,
		0x6f, 0xe0, 0xc0,
		0x6f, 0xc0, 0xc0,
		0x6f, 0xdf, 0xc0,
		0x6f, 0xdf, 0xc0,
		0x6f, 0x9f, 0xc0,
		0x6f, 0xdf, 0xc0,
		0x6f, 0x7f, 0xc0,
		0x6f, 0x7f, 0xc0,
		0x7f, 0x7f, 0xc0,
		0x6f, 0xff, 0xc0,
		0x63, 0xf8, 0xc0,
		0x03, 0xc0, 0xc0,
		0x03, 0x00, 0xc0,
		0x03, 0x00, 0xc0,
		0x03, 0x07, 0xc0,
		0x03, 0x01, 0x80,
		0x00, 0x00, 0x00,

	},
};	/* 啊 */

const StCHS_20 stCHS_20_20_CAE4 =
{
	0xCAE4,
	{
		0x00, 0x00, 0x00,
		0x00, 0x00, 0x00,
		0x20, 0x40, 0x00,
		0x20, 0xa0, 0x00,
		0x21, 0x10, 0x00,
		0xfa, 0x08, 0x00,
		0x25, 0xf6, 0x00,
		0x40, 0x00, 0x00,
		0x53, 0xc4, 0x00,
		0x92, 0x54, 0x00,
		0xfa, 0x54, 0x00,
		0x13, 0xd4, 0x00,
		0x1a, 0x54, 0x00,
		0xf2, 0x54, 0x00,
		0x53, 0xd4, 0x00,
		0x12, 0x44, 0x00,
		0x12, 0x54, 0x00,
		0x12, 0xc8, 0x00,
		0x00, 0x00, 0x00,
		0x00, 0x00, 0x00,

	},
};	/* 输 */

const StCHS_20 stCHS_20_20_C8EB =
{
	0xC8EB,
	{
		0x00, 0x00, 0x00,
		0x00, 0x00, 0x00,
		0x04, 0x00, 0x00,
		0x02, 0x00, 0x00,
		0x01, 0x00, 0x00,
		0x01, 0x00, 0x00,
		0x01, 0x00, 0x00,
		0x02, 0x80, 0x00,
		0x02, 0x80, 0x00,
		0x02, 0x80, 0x00,
		0x04, 0x40, 0x00,
		0x04, 0x40, 0x00,
		0x08, 0x20, 0x00,
		0x08, 0x20, 0x00,
		0x10, 0x10, 0x00,
		0x20, 0x10, 0x00,
		0x40, 0x08, 0x00,
		0x80, 0x06, 0x00,
		0x00, 0x00, 0x00,
		0x00, 0x00, 0x00,

	},
};	/* 入 */

const StCHS_20 stCHS_20_20_D6B1 =
{
	0xD6B1,
	{
		0x00, 0x00, 0x00,
		0x00, 0x00, 0x00,
		0x01, 0x00, 0x00,
		0x01, 0x00, 0x00,
		0x7f, 0xfc, 0x00,
		0x01, 0x00, 0x00,
		0x1f, 0xf0, 0x00,
		0x10, 0x10, 0x00,
		0x10, 0x10, 0x00,
		0x1f, 0xf0, 0x00,
		0x10, 0x10, 0x00,
		0x1f, 0xf0, 0x00,
		0x10, 0x10, 0x00,
		0x1f, 0xf0, 0x00,
		0x10, 0x10, 0x00,
		0x10, 0x10, 0x00,
		0xff, 0xfe, 0x00,
		0x00, 0x00, 0x00,
		0x00, 0x00, 0x00,
		0x00, 0x00, 0x00,

	},
};	/* 直 */

const StCHS_20 stCHS_20_20_C1AC =
{
	0xC1AC,
	{
		0x00, 0x00, 0x00,
		0x00, 0x00, 0x00,
		0x00, 0x40, 0x00,
		0x20, 0x40, 0x00,
		0x17, 0xfe, 0x00,
		0x10, 0x80, 0x00,
		0x00, 0xa0, 0x00,
		0x01, 0x20, 0x00,
		0xf3, 0xfc, 0x00,
		0x10, 0x20, 0x00,
		0x10, 0x20, 0x00,
		0x10, 0x20, 0x00,
		0x17, 0xfe, 0x00,
		0x10, 0x20, 0x00,
		0x10, 0x20, 0x00,
		0x28, 0x20, 0x00,
		0x47, 0xfe, 0x00,
		0x00, 0x00, 0x00,
		0x00, 0x00, 0x00,
		0x00, 0x00, 0x00,

	},
};	/* 连 */

const StCHS_20 stCHS_20_20_BEB2 =
{
	0xBEB2,
	{
		0x00, 0x00, 0x00,
		0x00, 0x00, 0x00,
		0x10, 0x40, 0x00,
		0x10, 0x40, 0x00,
		0xfe, 0x78, 0x00,
		0x10, 0x88, 0x00,
		0x7c, 0x10, 0x00,
		0x11, 0xfc, 0x00,
		0xfe, 0x24, 0x00,
		0x00, 0x24, 0x00,
		0x7d, 0xfe, 0x00,
		0x44, 0x24, 0x00,
		0x7c, 0x24, 0x00,
		0x45, 0xfc, 0x00,
		0x7c, 0x24, 0x00,
		0x44, 0x20, 0x00,
		0x54, 0xa0, 0x00,
		0x48, 0x40, 0x00,
		0x00, 0x00, 0x00,
		0x00, 0x00, 0x00,

	},
};	/* 静 */
const StCHS_20 stCHS_20_20_D2F4 =
{
	0xD2F4,
	{
		0x00, 0x00, 0x00,
		0x00, 0x00, 0x00,
		0x02, 0x00, 0x00,
		0x01, 0x00, 0x00,
		0x3f, 0xf8, 0x00,
		0x00, 0x00, 0x00,
		0x08, 0x20, 0x00,
		0x04, 0x40, 0x00,
		0xff, 0xfe, 0x00,
		0x00, 0x00, 0x00,
		0x1f, 0xf0, 0x00,
		0x10, 0x10, 0x00,
		0x10, 0x10, 0x00,
		0x1f, 0xf0, 0x00,
		0x10, 0x10, 0x00,
		0x10, 0x10, 0x00,
		0x1f, 0xf0, 0x00,
		0x10, 0x10, 0x00,
		0x00, 0x00, 0x00,
		0x00, 0x00, 0x00,

	},
};	/* 音 */

const StCHS_20 stCHS_20_20_D7F3 =
{
	0xD7F3,
	{
		0x00, 0x00, 0x00,
		0x00, 0x00, 0x00,
		0x02, 0x00, 0x00,
		0x02, 0x00, 0x00,
		0x02, 0x00, 0x00,
		0xff, 0xfe, 0x00,
		0x04, 0x00, 0x00,
		0x04, 0x00, 0x00,
		0x04, 0x00, 0x00,
		0x08, 0x00, 0x00,
		0x0f, 0xf8, 0x00,
		0x10, 0x80, 0x00,
		0x10, 0x80, 0x00,
		0x20, 0x80, 0x00,
		0x40, 0x80, 0x00,
		0x80, 0x80, 0x00,
		0x3f, 0xfe, 0x00,
		0x00, 0x00, 0x00,
		0x00, 0x00, 0x00,
		0x00, 0x00, 0x00,

	},
};	/* 左 */

const StCHS_20 stCHS_20_20_D3D2 =
{
	0xD3D2,
	{
		0x00, 0x00, 0x00,
		0x00, 0x00, 0x00,
		0x02, 0x00, 0x00,
		0x02, 0x00, 0x00,
		0x02, 0x00, 0x00,
		0xff, 0xfe, 0x00,
		0x04, 0x00, 0x00,
		0x04, 0x00, 0x00,
		0x08, 0x00, 0x00,
		0x08, 0x00, 0x00,
		0x1f, 0xf8, 0x00,
		0x28, 0x08, 0x00,
		0x48, 0x08, 0x00,
		0x88, 0x08, 0x00,
		0x08, 0x08, 0x00,
		0x08, 0x08, 0x00,
		0x0f, 0xf8, 0x00,
		0x08, 0x08, 0x00,
		0x00, 0x00, 0x00,
		0x00, 0x00, 0x00,

	},
};	/* 右 */

/* add some chinese at the upside */
const StCHS_20 stCHS_20_20_A1F9 =
{
	0xA1F9,
	{
		0x00, 0x00, 0x00,
		0x00, 0x00, 0x00,
		0x00, 0x60, 0xc0,
		0x38, 0xf1, 0xc0,
		0x1c, 0xf3, 0x80,
		0x0e, 0x67, 0x00,
		0x07, 0x0e, 0x00,
		0x03, 0x9c, 0x00,
		0x1d, 0xfb, 0x80,
		0x3c, 0xf3, 0xc0,
		0x3c, 0xf3, 0xc0,
		0x01, 0x98, 0x00,
		0x03, 0x0c, 0x00,
		0x06, 0x07, 0x00,
		0x0c, 0xf3, 0x80,
		0x38, 0xf1, 0xc0,
		0x30, 0x60, 0xc0,
		0x00, 0x00, 0x00,
		0x00, 0x00, 0x00,
		0x00, 0x00, 0x00,

	},
};	/* ※ */


static const uint8_t * lv_font_get_bitmap_chs_20(const lv_font_t * font, uint32_t unicode_letter);
const int16_t lv_font_get_width_chs_20(const lv_font_t * font, uint32_t unicode_letter);

lv_font_t lv_font_chs_20 =
{
#if LV_TXT_UTF8
	.unicode_first = 0xA1A1, /*First Unicode letter in this font*/
	.unicode_last = 0xF7FE,  /*Last Unicode letter in this font*/
#else
	.unicode_first = 192, /*First Unicode letter in this font*/
	.unicode_last = 241,  /*Last Unicode letter in this font*/
#endif
	.h_px = 20,             /*Font height in pixels*/
	.glyph_bitmap = NULL,   /*Bitmap of glyphs*/
	.glyph_dsc = NULL,      /*Description of glyphs*/
	.unicode_list = NULL,
	.get_bitmap = lv_font_get_bitmap_chs_20,    /*Function pointer to get glyph's bitmap*/
	.get_width = lv_font_get_width_chs_20,  /*Function pointer to get glyph's width*/
	.bpp = 1,               /*Bit per pixel*/
	.next_page = NULL,      /*Pointer to a font extension*/
};


static const uint8_t * lv_font_get_bitmap_chs_20(const lv_font_t * font, uint32_t unicode_letter)
{
	if ((unicode_letter < lv_font_chs_20.unicode_first) ||
		(unicode_letter > lv_font_chs_20.unicode_last))
	{
		return NULL;
	}

	const StCHS_20 *pCHS = &stCHS_20_20_B0A1;
	const StCHS_20 *pCHSEnd = &stCHS_20_20_A1F9;
	while (pCHS < pCHSEnd)
	{
		if (pCHS->u16MachineCode == (uint16_t)unicode_letter)
		{
			return pCHS->c8FontArr;
		}
		pCHS++;
	}
	return pCHSEnd->c8FontArr;
}

const int16_t lv_font_get_width_chs_20(const lv_font_t * font, uint32_t unicode_letter)
{
	if ((unicode_letter < lv_font_chs_20.unicode_first) ||
		(unicode_letter > lv_font_chs_20.unicode_last))
	{
		return -1;
	}

	return 20;
}


static char s_c8FakeUnicodeForCHS[128 + 8];

char *GetFakeUnicodeForCH(const char *pStr, int32_t s32StrLen)
{
	if ((pStr == NULL) || (s32StrLen == 0))
	{
		return NULL;
	}
	if (s32StrLen < 0)
	{
		s32StrLen = strlen(pStr);
	}

	if (s32StrLen > 127)
	{
		return NULL;
	}

	{
		const char *pTmp = pStr;
		const char *pEnd = pStr + s32StrLen;
		char *pDest = s_c8FakeUnicodeForCHS;

		while (pTmp <= pEnd)
		{
			uint16_t u16Letter;
			if (pTmp[0] > 0)
			{
				u16Letter = pTmp[0];
				pTmp++;
			}
			else
			{
				u16Letter = pTmp[0];
				u16Letter <<= 8;
				u16Letter |= (pTmp[1] & 0xFF);

				pTmp += 2;
			}
			if (u16Letter < 128)
			{
				pDest[0] = (char)u16Letter;
				pDest++;
			}
			else if (u16Letter < 0x0800) 
			{
				pDest[0] = ((u16Letter >> 6) & 0x1F) | 0xC0;
				pDest[1] = ((u16Letter >> 0) & 0x3F) | 0x80;
				pDest += 2;
			}
			else if (u16Letter < 0x010000) 
			{
				pDest[0] = ((u16Letter >> 12) & 0x0F) | 0xE0;
				pDest[1] = ((u16Letter >> 6) & 0x3F) | 0x80;
				pDest[2] = ((u16Letter >> 0) & 0x3F) | 0x80;
				pDest += 3;
			}

			if ((pDest - s_c8FakeUnicodeForCHS) > 127)
			{
				return GetFakeUnicodeForCH("字符过长", -1);
			}
		}
		pDest[0] = 0;	/* end */
		return s_c8FakeUnicodeForCHS;
	}

}
