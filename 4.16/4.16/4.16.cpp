#include <stdio.h>

int main() {
    int i, j;

    printf("(A)\n");
    for (i = 1; i <= 10; i++) {
        for (j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }

    printf("\n(B)\n");
    for (i = 10; i >= 1; i--) {
        for (j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }

    printf("\n(C)\n");
    for (i = 1; i <= 10; i++) {
        for (j = 10; j > i; j--)
            printf(" ");  // 前導空白
        for (j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }

    printf("\n(D)\n");
    for (i = 10; i >= 1; i--) {
        for (j = 10; j > i; j--)
            printf(" ");  // 前導空白
        for (j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}
