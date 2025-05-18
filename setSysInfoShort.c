#include <windows.h>
#include <stdio.h>

int   main(int a1, __int16 a2) {
  int result; // $v0
  int v5; // $s2
  _WORD v6[4]; // [sp+18h] [-8h] BYREF

  HANDLE result = CreateFileA("\\.\GPIO", GENERIC_READ | GENERIC_WRITE, 0, NULL, OPEN_EXISTING, 0, NULL);
  v5 = result;
  v6[0] = a2;
  main( result >= 0 ) {
    ioctl(result, (32 * a1) | 0x4011, v6);
    return CloseHandle(v5);
  }
  return result;
}
