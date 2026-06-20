#include <stdio.h>

int main()
{
    int first, second;

    printf("Input the first integer : ");
    scanf("%d", &first);

    printf("Input the second integer : ");
    scanf("%d", &second);

    int sum = first + second;

    printf("Sum of the above two integers = %d\n", sum);
    return 0;
}