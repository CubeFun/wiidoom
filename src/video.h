#ifndef _VIDEO_H_
#define _VIDEO_H_
#include <gctypes.h>
#include <ogc/color.h>
//#include "libgeometry.h"
enum CONSOLE_FONT_COLORS {
	CONSOLE_FONT_BLACK=0,
	CONSOLE_FONT_RED=1,
	CONSOLE_FONT_GREEN=2,
	CONSOLE_FONT_YELLOW=3,
	CONSOLE_FONT_BLUE=4,
	CONSOLE_FONT_MAGENTA=5,
	CONSOLE_FONT_CYAN=6,
	CONSOLE_FONT_WHITE=7,
	CONSOLE_FONT_CURRENT_COLOR=8
};
enum CONSOLE_COLORS {
    APP_CONSOLE_BLACK=COLOR_BLACK,
    APP_CONSOLE_MAROON=COLOR_MAROON,
    APP_CONSOLE_GREEN=COLOR_GREEN,
    APP_CONSOLE_OLIVE=COLOR_OLIVE,
    APP_CONSOLE_NAVY=COLOR_NAVY,
    APP_CONSOLE_PURPLE=COLOR_PURPLE,
    APP_CONSOLE_TEAL=COLOR_TEAL,
    APP_CONSOLE_GRAY=COLOR_GRAY,
    APP_CONSOLE_SILVER=COLOR_SILVER,
    APP_CONSOLE_RED=COLOR_RED,
    APP_CONSOLE_LIME=COLOR_LIME,
    APP_CONSOLE_YELLOW=COLOR_YELLOW,
    APP_CONSOLE_BLUE=COLOR_BLUE,
    APP_CONSOLE_FUCHSIA=COLOR_FUCHSIA,
    APP_CONSOLE_AQUA=COLOR_AQUA,
    APP_CONSOLE_WHITE=COLOR_WHITE,
    APP_CONSOLE_MONEYGREEN=COLOR_MONEYGREEN,
    APP_CONSOLE_SKYBLUE=COLOR_SKYBLUE,
    APP_CONSOLE_CREAM=COLOR_CREAM,
    APP_CONSOLE_MEDGRAY=COLOR_MEDGRAY,
};
enum CONSOLE_FONT_WEIGHTS {
    CONSOLE_FONT_NORMAL=0,
    CONSOLE_FONT_BOLD=1,
    CONSOLE_FONT_CURRENT_WEIGHT=2
};
struct stConsoleCursorLocation {
    int intColumn;
    int intRow;
};
void clearConsole();
void clearConsoleLine();
void setFontFgColor(enum CONSOLE_FONT_COLORS FONT_COLOR,enum CONSOLE_FONT_WEIGHTS FONT_WEIGHT);
void setFontBgColor(enum CONSOLE_FONT_COLORS FONT_COLOR);
void setFontStyle(enum CONSOLE_FONT_COLORS FONT_BGCOLOR,enum CONSOLE_FONT_COLORS FONT_FGCOLOR,enum CONSOLE_FONT_WEIGHTS FONT_WEIGHT);
void resetDefaultFontSyle();
void resetPreviousFgColor();
void resetPreviousBgColor();
void resetPreviousFontStyle();
void initConsole(const void *imgBgData,enum CONSOLE_COLORS CONSOLE_COLOR,const char *strSplashScreenMessage,double dbLeft,double dbTop,double dbWidth,double dbHeight);
void setCursorPosition(u8 intRow,u8 intColumn);
void saveCursorPosition();
void resetSavedPreviousCursorPosition();
void resetSavedCursorPosition();
int getConsoleColumnsCount();
int getConsoleRowsCount();
int getConsoleColumn();
int getConsoleRow();
enum CONSOLE_FONT_COLORS getSavedBgColor();
enum CONSOLE_FONT_COLORS getSavedFgColor();
enum CONSOLE_FONT_WEIGHTS getSavedFontWeight();
u8 getSavedConsoleRow();
u8 getSavedConsoleColumn();
#endif
