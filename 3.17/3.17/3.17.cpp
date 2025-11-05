#include <iostream>
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int account;
    double beginningBalance, totalCharges, totalCredits, creditLimit, newBalance;
	printf("Enter account number (-1 to end): ");
	scanf_s("%d",&account);
    while (account != -1) {
        printf("Enter beginning balance: ");
        scanf_s("%lf",&beginningBalance);

        printf("Enter total charges: ");
        scanf_s("%lf",&totalCharges);

        printf("Enter total credits: ");
        scanf_s("%lf",&totalCredits);

        printf("Enter credit limit: ");
        scanf_s("%lf",&creditLimit);

        // 計算新餘額
        newBalance = beginningBalance + totalCharges - totalCredits;

        // 判斷是否超過信用額度
        if (newBalance > creditLimit) {
            printf("Account:      %d\n", account);
            printf("Credit limit: %.2f\n", creditLimit);
            printf("Balance:      %.2f\n", newBalance);
            printf("Credit Limit Exceeded.\n\n");
        }
        else {
            printf("\n");
        }

        printf("Enter account number (-1 to end): ");
        scanf_s("%d", &account);
    }
    return 0;
}
