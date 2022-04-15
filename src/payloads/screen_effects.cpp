#include <Windows.h>
#include <iostream>
#include <stdio.h>

using namespace std;

int scrWidth, scrHeight;

int ScreenPatchify() 
{
	scrWidth = GetSystemMetrics(SM_CXSCREEN);
	scrHeight = GetSystemMetrics(SM_CYSCREEN);

	while (true) 
	{
		int randX, randY;
		
		randX = rand() % scrWidth + 0;
		randY = rand() % scrHeight + 0;

		BitBlt(GetDC(NULL), rand() % scrWidth + 0, rand() % scrHeight + 0, randX + 200, randY + 200, GetDC(NULL), randX, randY, NOTSRCCOPY);
	
		Sleep(1000);
	}

	return 0;
}

int ScreenTunnel()
{
	scrWidth = GetSystemMetrics(SM_CXSCREEN);
	scrHeight = GetSystemMetrics(SM_CYSCREEN);

	while (true)
	{
		StretchBlt(GetDC(NULL), 50, 50, scrWidth - 100, scrHeight - 100, GetDC(NULL), 0, 0, scrWidth, scrHeight, SRCCOPY);

		Sleep(1000);
	}

	return 0;
}

int ScreenInvert()
{
	scrWidth = GetSystemMetrics(SM_CXSCREEN);
	scrHeight = GetSystemMetrics(SM_CYSCREEN);

	HDC hdc = GetDC(HWND_DESKTOP);

	while (true)
	{
		BitBlt(hdc, 0, 0, scrWidth * 2, scrHeight * 2, hdc, NULL, NULL, NOTSRCCOPY);

		Sleep(1000);
	}

	return 0;
}