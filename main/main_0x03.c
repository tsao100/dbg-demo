#include <stdio.h>
#undef putc

int main(int argv, char* argc[])
{
    printf("Hello!%c",'\n');
}

// x86_64-w64-mingw32-gcc -o ./output/main_0x03.exe ./main/main_0x03.c
// i686-w64-mingw32-gcc -o ./output/main_0x03_Win32.exe ./main/main_0x03.c