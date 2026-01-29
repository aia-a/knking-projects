/* Program to compute the value of polynomial */

#include <stdio.h>

int main(void)
{
    float x, x_sq, x_cb, x_qd, x_pl, val, val_hr;

    printf("Enter the value for x: ");
    scanf("%f", &x);

    x_sq = x * x;
    x_cb = x_sq * x;
    x_qd = x_cb * x;
    x_pl = x_qd * x;

    val = 3 * x_pl + 2 * x_qd - 5 * x_cb - x_sq + 7 * x - 6;
    val_hr = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

    printf("The value of polynomial 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6, is: %.2f\n", val);
    printf("The same value computed with Horner's Rule: %.2f\n", val_hr);
}
