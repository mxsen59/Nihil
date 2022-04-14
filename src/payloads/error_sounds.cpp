#include <Windows.h>
#include <stdio.h>
#include <mmsystem.h>

using namespace std;

const char* sounds[] =
{
	"SystemHand",
	"SystemQuestion",
	"SystemExclamation"
};

int ErrSounds()
{
	while (true)
	{
		PlaySoundA(sounds[rand() % (sizeof(sounds) / sizeof(sounds[0]))], GetModuleHandle(NULL), SND_SYNC);
	}

	return 20 + (rand() % 20);
}