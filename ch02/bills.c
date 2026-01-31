/* Pay a given US dollar amount with smallest bills split */

#include <stdio.h>

int main(void)
{
    int amt, bls_20, bls_10, bls_5, bls_1;

    printf("Enter a dollar amount: ");
    scanf("%d", &amt);

    bls_20 = amt / 20;
    amt = amt % 20;
    bls_10 = amt / 10;
    amt = amt % 10;
    bls_5 = amt / 5;
    amt = amt % 5;
    bls_1 = amt;

    printf("\n$20 bills: %d\n", bls_20);
    printf("$10 bills: %d\n", bls_10);
    printf("\x20$5 bills: %d\n", bls_5);
    printf("\x20$1 bills: %d\n", bls_1);
}
