#include <stdio.h>
int main()
{
    int i, j, n;
    printf("enter the size:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) // row
    {
        for (int k = 1; k <= n - i; k++) // space
        {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) // col
        {
            printf("%d",j);
        }
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--) // row
    {
        for (int k = 1; k <= n - i; k++) // space
        {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) // col
        {
            printf("%d",j);
        }
        printf("\n");
    }
}