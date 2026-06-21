#include <stdio.h>

int main()
{
    float weight1, ni1, weight2, ni2;
    printf("Weight - Item 1 : ");
    scanf("%f", &weight1);

    printf("\nNo. of item1 :  ");
    scanf("%f", &ni1);

    printf("\nWeight - Item 2 : ");
    scanf("%f", &weight2);

    printf("\nNo. of item2 :  ");
    scanf("%f", &ni2);

    float avg = ((weight1 * ni1) + (weight2 * ni2)) / (ni1 + ni2);

    printf("Average value = %f\n", avg);

    return 0;
}