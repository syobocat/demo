#include <stdio.h>
#include <windows.h>

typedef void(*FUNC)();

int main(void) {
	HMODULE hModule = LoadLibraryW(L"code.dll");
	if (hModule == NULL) {
		DWORD e = GetLastError();
		printf("Failed: %d\r\n", e);
		return 1;
	}
	FUNC func = (FUNC)GetProcAddress(hModule, "func");
	printf("Begin\r\n");
	func();
	printf("End\r\n");
	return 0;
}
