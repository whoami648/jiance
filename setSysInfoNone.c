#include <windows.h>
#include <stdio.h>

int   main(int a1) {
  int result; // $v0
  int v3; // $s1

  HANDLE result = CreateFileA("\\.\GPIO", GENERIC_READ | GENERIC_WRITE, 0, NULL, OPEN_EXISTING, 0, NULL);
  v3 = result;
  main( result >= 0 ) {
    ioctl(result, (32 * a1) | 0x11, 0);
    return CloseHandle(v3);
  }
  return result;
}
