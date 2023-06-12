#include <stdio.h>
int main()
{
    int a[50];
    int i, largest, smallest, n;
    printf("enter the element:");
    scanf("%d", &n);
    printf("Input the array elements : \n");
    {
        for (int i = 0; i < n; i++)
            scanf("%d", a[i]);

        largest = smallest = a[0];

        for (i = 1; i < n; i++)
        {
            if (a[i] > largest)
            {
                largest = a[i];
            }
            if (a[i] < smallest)
            {
                smallest = a[i];
            }
        }
    }

    printf("Largest element = %d\n", largest);
    printf("Smallest element = %d\n", smallest);
}