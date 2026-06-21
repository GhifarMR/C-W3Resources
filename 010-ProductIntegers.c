#include <stdio.h>

int main()
{
    int first;
    int second;

    printf("Input the first integer : ");
    scanf("%d", &first);

    printf("\nInput the second integer : ");
    scanf("%d", &second);

    int sum = first * second;

    printf("Product of the above two integers = %d\n", sum);

    return 0;
}