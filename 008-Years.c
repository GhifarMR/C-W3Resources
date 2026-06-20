#include <stdio.h>

int main()
{
    int NumberOfdays = 1329;
    int years = 1329 / 365;
    int weeks = (1329 % 365) / 7;
    int days = (1329 % 365 % 7);

    printf("Years : %d\n", years);
    printf("Weeks : %d\n", weeks);
    printf("Days : %d\n", days);

    return 0;
}