#include <stdio.h>
#include <math.h>

int main()
{

    float radius = 7.0;

    float perimeter = 2 * M_PI * radius;
    float area = M_PI * pow(radius, 2);

    printf("Perimeter of the circle = %f\n", perimeter);
    printf("Area of the circle = %f\n", area);

    return 0;
}