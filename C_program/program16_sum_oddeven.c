#include <stdio.h>
int main()
{
    int size, i, a[10];
    int even = 0, odd = 0;
    printf("enter the size of array:");
    scanf("%d", &size);

    printf("enter the element:");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    
    for (int i = 0; i < size; i++)
    {
        if (a[i] % 2 == 0)
        {
            even = even + a[i];
        }
        else
        {
            odd = odd + a[i];
        }
    }
    printf("sum of even number:%d \n", even);
    printf("sum of odd number:%d", odd);
}