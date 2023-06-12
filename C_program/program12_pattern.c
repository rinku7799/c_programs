#include<stdio.h>
int main()
{
    int i,j,k;
    int space=5;
    for (int i = 1; i <= 6; i++)  //col
    {
        for (int j = 1; j <=space; j++)  //space
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)  //row
        {
            printf("* ");
        }
        printf("\n");
        space--;
    }
    
}