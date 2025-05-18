/*
 * @Descripttion: 
 * @version: V1.0
 * @Author: zyx
 * @Date: 2025-05-15 09:42:40
 * @LastEditors: zyx
 * @LastEditTime: 2025-05-16 10:16:28
 */
#include <windows.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    HANDLE hDevice;
    DWORD bytesReturned;
    int a1 = 1; // 示例参数
    int a2 = 2; // 示例参数
    int a3 = 3; // 示例参数

    // 打开设备（假设设备是 GPIO）
    hDevice = CreateFileA("\\\\.\\GPIO", // 设备路径
                          GENERIC_READ | GENERIC_WRITE,
                          0,
                          NULL,
                          OPEN_EXISTING,
                          0,
                          NULL);

    if (hDevice != INVALID_HANDLE_VALUE) {
        // 使用 DeviceIoControl 替代 ioctl
        BOOL success = DeviceIoControl(hDevice,
                                       (DWORD)((32 * a1) | (a3 << 13) | 0x11), // 控制码
                                       &a2,
                                       sizeof(a2),
                                       NULL,
                                       0,
                                       &bytesReturned,
                                       NULL);

        if (!success) {
            printf("DeviceIoControl failed with error: %ld\n", GetLastError());
        }

        // 关闭设备
        CloseHandle(hDevice);
    } else {
        printf("CreateFile failed with error: %ld\n", GetLastError());
    }

    return 0;
}