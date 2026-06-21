#include <stdio.h>

int main()
{
    char id[11];
    float hours, amount;

    printf("Input the Employees ID(Max. 10 chars) : ");
    scanf("%s", id);

    printf("\nInput the working hrs : ");
    scanf("%f", &hours);

    printf("\nSalary amount/hr : ");
    scanf("%f", &amount);

    float salary = hours * amount;

    printf("Employees ID = %s\n", id);
    printf("Salary = US$%.2f\n", salary);

    return 0;
}