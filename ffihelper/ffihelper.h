#pragma once
#include <SDKDDKVer.h>
#include <afxwin.h>
// #include <comdef.h>
// #include <Windows.h>
// #include <gdiplus.h> //将GDI+头文件加入到工程中
// #pragma comment(lib, "gdiplus.lib") //将GDI+的lib文件加入到工程中
// using namespace Gdiplus; //使用GDI+的命名空间

void HBitmapToBmpFile(HBITMAP hBmp, LPWSTR szTempFileName);
void HWndToBmpFile(HBITMAP hBmp, LPWSTR szTempFileName);