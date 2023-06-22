#include <Windows.h>

int main(void) {
    MessageBoxW(
        NULL,
        L"Hello World!",
        L"Hi! I'm a title",
        MB_YESNOCANCEL
    );

    return EXIT_SUCCESS;
}