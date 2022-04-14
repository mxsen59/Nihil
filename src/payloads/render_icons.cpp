#include <Windows.h>
#include <stdio.h>

using namespace std;

int RenderIco()
{
	int iconX = GetSystemMetrics(SM_CXICON) / 2;
	int iconY = GetSystemMetrics(SM_CYICON) / 2;

	POINT cursor;
	HDC hdc = GetDC(HWND_DESKTOP);
	HICON icon = LoadIcon(NULL, IDI_ERROR);

	while (true)
	{
		GetCursorPos(&cursor);

		DrawIcon(hdc, cursor.x - iconX, cursor.y - iconY, icon);

		Sleep(500);
	}
	
	return 0;
}