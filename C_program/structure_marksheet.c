#include <stdio.h>

struct student
{
    int roll_number;
    char name[20];
    float marks[5];
};
int main()
{
    struct student s;
    printf("enter the roll number:");
    scanf("%d", &s.roll_number);
    printf("enter the name:");
    scanf("%s", &s.name);
    printf("enter the  five subject marks:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Subject %d:", i + 1);
        scanf("%f", &s.marks[i]);
    }
    printf("\nUniversity Marksheet\n");
    printf("Roll_No: %d\n", s.roll_number);
    printf("Name:%s \n", s.name);
    printf("Student \t Marks \n");
    printf("------- \t ----- \n");

    for (int i = 0; i < 5; i++)
    {
        printf("Subject %d\t %.2f\n", i + 1, s.marks[i]);
    }
}