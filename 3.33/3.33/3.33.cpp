#include <stdio.h>

int main() {
    int height, width;

    printf("Enter height of the rectangle: ");
    scanf_s("%d", &height);

    printf("Enter width of the rectangle: ");
    scanf_s("%d", &width);

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            // 第一列或最後一列印滿 '+'
            if (i == 0 || i == height - 1)
                printf("+");
            // 中間列只印左右兩邊的 '+'
            else if (j == 0 || j == width - 1)
                printf("+");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
