#include <stdio.h>
int main()
{
    int marks;
    char s[10];
    printf("enter the student name:");
    scanf("%s", &s);
    printf("enter the student marks:");
    scanf("%d", &marks);
    if (marks >= 90)
    {
        printf("grade A");
    }
    else if (marks >= 80 && marks < 90)
    {
        printf("grade B");
    }
    else if (marks >= 70 && marks < 80)
    {
        printf("grade C");
    }
    else if (marks >= 60 && marks < 70)
    {
        printf("grade D");
    }
    else if (marks >= 50 && marks < 60)
    {
        printf("grade E");
    }
    else
    {
        printf("grade F");
    }
}