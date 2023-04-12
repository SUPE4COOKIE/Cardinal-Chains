#ifndef PLATFORM_H
#define PLATFORM_H

#ifdef _WIN32 // we check if we are on windows
#include <windows.h>

void enable_virtual_terminal_processing()
/*
This is used to enable the use of ANSI escape codes on windows.
*/
{
    HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
    DWORD consoleMode;
    GetConsoleMode(hStdout, &consoleMode);
    consoleMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
    SetConsoleMode(hStdout, consoleMode);
}

#endif // _WIN32

#endif // PLATFORM_H
