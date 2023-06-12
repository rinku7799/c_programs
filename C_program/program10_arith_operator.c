#include <stdio.h>
int main()
{
    int a, b, ans;
    char opeater;
    printf("enter the operator +,-,*,/ \n");
    scanf("%c", &opeater);
    printf("enter the two number:");
    scanf("%d %d", &a, &b);
    switch (opeater)
    {
    case '+':
        ans = a + b;
        printf("Addition is: %d", ans);
        break;
    case '-':
        ans = a - b;
        printf("Subtraction is: %d", ans);
        break;
    case '*':
        ans = a * b;
        printf("Multiplication is: %d", ans);
        break;
    case '/':
        ans = a / b;
        printf("Division is: %d", ans);
        break;

    default:
    printf("invalid number");
        break;
    }
}