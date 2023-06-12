#include <stdio.h>
int main()
{
    // p=principle r=rate t=time
    float p, r, t, compound_interest;
    printf("enter the principle:");
    scanf("%f", &p);
    printf("enter the rate:");
    scanf("%f", &r);
    printf("enter the time:");
    scanf("%f", &t);
    compound_interest = p * (pow((1 + r / 100), t));
    printf("Compound Interest = %f", compound_interest);
}