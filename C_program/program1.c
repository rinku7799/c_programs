#include <stdio.h>
int main()
{
    int a, b, quotient, remainder;
    printf("enter the first number:");
    scanf("%d", &a);
    printf("enter the second number:");
    scanf("%d", &b);
    quotient = a / b;
    remainder = a % b;
    printf("Quotient: %d\nRemainder: %d", quotient, remainder);
}