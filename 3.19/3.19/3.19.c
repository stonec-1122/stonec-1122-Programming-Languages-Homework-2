#include <stdio.h>

int main(void) {
    double principal;

    printf("Enter loan principal (-1 to end): ");
    while (scanf_s("%lf", &principal) == 1 && principal != -1.0) {
        double rate;
        int days;

        printf("Enter interest rate: ");
        if (scanf_s("%lf", &rate) != 1) break;

        printf("Enter term of the loan in days: ");
        if (scanf_s("%d", &days) != 1) break;

        double interest = principal * rate * days / 365.0;
        printf("The interest charge is $%.2f\n\n", interest);

        printf("Enter loan principal (-1 to end): ");
    }

    return 0;
}