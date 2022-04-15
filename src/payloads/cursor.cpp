#include <Windows.h>
#include <stdio.h>

using namespace std;

int screenWidth, screenHeight;

int CursorJiggle()
{
    screenWidth = GetSystemMetrics(SM_CXSCREEN);
    screenHeight = GetSystemMetrics(SM_CYSCREEN);

    while (true)
    {
        SetCursorPos(rand() % screenWidth, rand() % screenHeight);
        
        Sleep(500);
    }

    return 0;
}