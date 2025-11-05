#include <stdio.h>

int main() {
    int i, j;
    int n = 5; // 設定菱形的高度（即中間的行數）

    // 上半部分（包含中間行）
    for (i = 1; i <= n; i++) {
        // 輸出空格
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // 輸出星號
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        // 換行
        printf("\n");
    }

    // 下半部分
    for (i = n - 1; i >= 1; i--) {
        // 輸出空格
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // 輸出星號
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        // 換行
        printf("\n");
    }

    return 0;
}
