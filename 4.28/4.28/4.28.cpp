#include <stdio.h>

int main() {
    int paycode;
    double pay;

    // 輸入員工類型
    printf("Enter paycode (1=Manager, 2=Hourly Worker, 3=Commission Worker, 4=Pieceworker): ");
    scanf_s("%d", &paycode);

    switch (paycode) {
    case 1: // 管理員：固定薪資
        printf("Enter fixed salary: ");
        scanf_s("%lf", &pay);
        break;
    case 2: { // 計時工：每小時工資和工時
        double hourlyWage, hoursWorked;
        printf("Enter hourly wage: ");
        scanf_s("%lf", &hourlyWage);
        printf("Enter hours worked: ");
        scanf_s("%lf", &hoursWorked);
        if (hoursWorked <= 40) {
            pay = hourlyWage * hoursWorked;
        }
        else {
            pay = (40 * hourlyWage) + ((hoursWorked - 40) * hourlyWage * 1.5);  // 超時工資為1.5倍
        }
        break;
    }
    case 3: { // 佣金工人：固定底薪 + 銷售提成
        double sales;
        printf("Enter weekly sales: ");
        scanf_s("%lf", &sales);
        pay = 250 + (sales * 0.057);  // 佣金為銷售額的5.7%
        break;
    }
    case 4: { // 件工人：每個產品的薪水
        int itemsProduced;
        double payPerItem;
        printf("Enter number of items produced: ");
        scanf_s("%d", &itemsProduced);
        printf("Enter pay per item: ");
        scanf_s("%lf", &payPerItem);
        pay = itemsProduced * payPerItem;  // 根據每個產品的薪水計算總薪水
        break;
    }
    default:
        printf("Invalid paycode\n");
        return 1;
    }

    printf("Total pay: %.2lf\n", pay);  // 輸出計算結果
    return 0;
}
