#include <stdio.h>
int main()
{
    int n, display = 1;
    int number[4];
    for (int i = 0; i < 4; i++)
    {
        printf("enter the number:");
        scanf("%d", &n);
        number[i] = n;
    }
    for (int i = 0; i < 4; i++)
    {
        if (number[i] == 0)
        {
            continue;
        }

        display = display * number[i];
    }
    printf("display four number: %d", display);
}
