#include <stdio.h>

int main(void)
{
    double sale = 0.0;
    double salary = 0.0;

    printf("Enter sales in dollars (-1 to end): ");
    while (scanf_s("%lf", &sale) == 1 && sale != -1)
    {
        salary = 200.0 + sale * 0.09;
        printf("Salary is: $%.2f\n\n", salary);
        printf("Enter sales in dollars (-1 to end): ");
    }

    return 0;
}