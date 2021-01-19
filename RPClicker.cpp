#include <windows.h>
#include <ctime>

int main() {
	srand(time(NULL));
	long scrH = GetSystemMetrics(SM_CYSCREEN), scrW = GetSystemMetrics(SM_CXSCREEN);

	Sleep(5000);

	for (int i = 0; i < 100000; ++i) {
		SetCursorPos(rand() % scrW, rand() % scrH);
		mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, NULL, NULL);
		Sleep(20);
		mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, NULL, NULL);
	}

	return 0;
}
