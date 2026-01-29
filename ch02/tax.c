/* Program to compute tax */

#include <stdio.h>

#define TAX_RATE 

int main(void)
{
    float amt, total_amt;

    printf("Enter an amount: ");
    scanf("%f", &amt);

    total_amt = amt * 1.05;

    printf("With tax added: $%.2f\n", total_amt);
}
