#include <stdio.h>
#include <math.h>

int main() {
    double principal = 5000.0;   // 初始投資金額
    int years = 15;              // 投資年數
    double rate;                 // 年利率

    printf("本金: $%.2f\n投資年數: %d 年\n\n", principal, years);
    printf("%s%20s\n", "利率 (%)", "最終金額 ($)");

    // 使用 for 迴圈變化利率
    for (rate = 0.10; rate <= 0.12; rate += 0.005) {
        double amount = principal * pow(1.0 + rate, years);
        printf("%6.1f%20.2f\n", rate * 100, amount);
    }

    return 0;
}
