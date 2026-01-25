/* Program to compute volume of a sphere */

#include <stdio.h>

#define VOLUME_FRACTION (4.0f / 3.0f)
#define PI              3.14159f             

int main(void)
{
    float v, r;

    printf("Enter a radius of a sphere (meters): ");
    scanf("%f", &r);

    v = VOLUME_FRACTION * PI * r * r * r;

    printf("The volume of a sphere with a %.2f-meter radius is %.2f cubic-meter.\n", r, v);

    return 0;
}
