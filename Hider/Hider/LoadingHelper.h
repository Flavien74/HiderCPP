#pragma once
#include <windows.h>
#include <string>

#include <objidl.h>
#include <gdiplus.h>
#pragma comment (lib, "Gdiplus.lib")
using namespace Gdiplus;

class LoadingHelper
{
public :

	LoadingHelper();
	~LoadingHelper();

	bool OpenImageFile(HWND hWnd, LoadingHelper* loadingHelper);
	void Draw(HDC hdc, int x, int y);

private : 
	HBITMAP m_hBitmap;
};

