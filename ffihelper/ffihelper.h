#pragma once
#include <SDKDDKVer.h>
#include <afxwin.h>
// #include <comdef.h>
// #include <Windows.h>
// #include <gdiplus.h> //��GDI+ͷ�ļ����뵽������
// #pragma comment(lib, "gdiplus.lib") //��GDI+��lib�ļ����뵽������
// using namespace Gdiplus; //ʹ��GDI+�������ռ�

void HBitmapToBmpFile(HBITMAP hBmp, LPWSTR szTempFileName);
void HWndToBmpFile(HBITMAP hBmp, LPWSTR szTempFileName);