#include <stdio.h>
int main()
{
    int num, even = 0, odd = 0;
    printf("enter the integer number:");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        switch (i % 2 == 0)
        {
        case 0:
            even++;
            break;
        case 1:
            odd++;
            break;
        }
    }

    {
        printf("number of even number: %d\n", even);
        printf("number of odd number: %d", odd);
    }
}