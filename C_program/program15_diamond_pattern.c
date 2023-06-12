#include <stdio.h>
int main()
{
    int i, j, k, n;

    printf("enter number:");
    scanf("%d", &n);
    int space = n - 1;
    for (int i = 1; i <= n; i++) // col
    {
        for (int j = 1; j <= space; j++) // space
        {
            printf(" ");
        }

        for (int k = 1; k <= 2 * i - 1; k++) // row
        {
            printf("%d", k);
        }
        printf("\n");
        space--;
    }
    space = 1;
    for (int i = 1; i <= n - 1; i++) // col
    {
        for (int j = 1; j <= space; j++) // space
        {
            printf(" ");
        }

        for (int k = 1; k <= 2 * (n - i) - 1; k++) // row
        {
            printf("%d", k);
        }
        printf("\n");
        space++;
    }

    return 0;
}