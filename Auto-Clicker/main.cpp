#include <Windows.h>

int main() {
	while (true) {
		if (GetAsyncKeyState(VK_ESCAPE))
			break;

		if (GetAsyncKeyState(VK_SPACE)) {
			INPUT input;
			input.type = INPUT_MOUSE;
			input.mi.dwFlags = (MOUSEEVENTF_ABSOLUTE | MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP);
			input.mi.mouseData = 0;
			input.mi.dwExtraInfo = NULL;
			input.mi.time = 0;
			SendInput(1, &input, sizeof(INPUT));
		}
	}
	return 0;
}