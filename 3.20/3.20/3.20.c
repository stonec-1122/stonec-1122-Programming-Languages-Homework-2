#include <stdio.h>

int main(void)
{
    int hours;
    double rate;
    double salary;

    while (1) {
        printf("Enter # of hours worked (-1 to end): ");
        if (scanf_s("%d", &hours) != 1) {
            // 非數字輸入，清除輸入並重試
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF) {}
            printf("Invalid input. Please enter an integer number of hours.\n");
            continue;
        }

        if (hours == -1) {
            break;
        }

        if (hours < 0) {
            printf("Hours cannot be negative (except -1 to end).\n");
            continue;
        }

        printf("Enter hourly rate of the worker ($00.00): ");
        if (scanf_s("%lf", &rate) != 1) {
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF) {}
            printf("Invalid input. Please enter a numeric hourly rate.\n");
            continue;
        }

        if (hours <= 40) {
            salary = hours * rate;
        } else {
            salary = 40 * rate + (hours - 40) * rate * 1.5;
        }

        printf("Salary is $%.2f\n\n", salary);
    }

    return 0;
}