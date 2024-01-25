#include <Windows.h>
#include <iostream>
#include "EasyBMP.h"

bool TakeScreenshot(std::string WindowToFind, BITMAP &bm, HBITMAP &hbmap, BITMAPINFO &bmi, HDC &hdcShot, HBITMAP &hBitmapOld, HWND &hwnd);
void SetupBitmapInfo(BITMAPINFO &bmi, int bWidth, int bHeight, int bitsPerPixel);
bool CompareColour(RGBQUAD *pPixels, int height, int width, int x, int y);
void ScanBMPHorizontal(ScanContents * scan);
bool Aim_Bot(HWND appWnd, std::string GameWindow);
 
MouseCoord CurrentMouseXY(0, 0);
 