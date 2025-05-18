/*
 * @Descripttion: 
 * @version: V1.0
 * @Author: zyx
 * @Date: 2025-05-15 09:42:40
 * @LastEditors: zyx
 * @LastEditTime: 2025-05-16 10:42:37
 */
#include <windows.h>
#include <stdio.h>

int main(int a1, unsigned int a2) {
    HANDLE result; // 使用 HANDLE 类型来存储设备句柄
    int v5;
    unsigned int v6 = a2; // 假设 v6 是 unsigned int 类型

    // 使用 CreateFile 打开设备
    result = CreateFileA("\\\\.\\GPIO", GENERIC_READ | GENERIC_WRITE, 0, NULL, OPEN_EXISTING, 0, NULL);

    if (result != INVALID_HANDLE_VALUE) { // 检查是否成功打开设备
        DWORD bytesReturned = 0; // 用于存储返回的字节数
        // 使用 DeviceIoControl 进行设备 I/O 控制
        BOOL success = DeviceIoControl(
            result,
            (DWORD)((32 * a1) | 0x8011),
            NULL,
            0,
            &v6,
            sizeof(v6),
            &bytesReturned,
            NULL
        );

        // 关闭设备句柄
        CloseHandle(result);

        return success ? bytesReturned : -1; // 返回成功时的字节数或错误码
    } else {
        return -1; // 返回错误码
    }
}