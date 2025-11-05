#include <stdio.h>
#include <math.h>

int main() {
    int side1, side2, hypotenuse;

    // 三重迴圈遍歷所有可能的邊長
    for (side1 = 1; side1 <= 500; side1++) {
        for (side2 = side1; side2 <= 500; side2++) {
            for (hypotenuse = side2; hypotenuse <= 500; hypotenuse++) {
                // 判斷是否為畢達哥拉斯三元組
                if (pow(side1, 2) + pow(side2, 2) == pow(hypotenuse, 2)) {
                    printf("Pythagorean Triple: %d, %d, %d\n", side1, side2, hypotenuse);
                }
            }
        }
    }
    return 0;
}
