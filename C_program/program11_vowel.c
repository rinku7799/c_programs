#include <stdio.h>
int main()
{
    char choice;
    printf("enter charcter:");
    scanf("%c", &choice);
    switch (choice)
    {
    case 'a':
        printf("%c is a vowel.\n", choice);
        break;
    case 'e':
        printf("%c is a vowel.\n", choice);
        break;
    case 'i':
        printf("%c is a vowel.\n", choice);
        break;
    case 'o':
        printf("%c is a vowel.\n", choice);
        break;
    case 'u':
        printf("%c is a vowel.\n", choice);
        break;
    case 'A':
        printf("%c is a vowel.\n", choice);
        break;
    case 'E':
        printf("%c is a vowel.\n", choice);
        break;
    case 'I':
        printf("%c is a vowel.\n", choice);
        break;
    case 'O':
        printf("%c is a vowel.\n", choice);
        break;
    case 'U':
        printf("%c is a vowel.\n", choice);
        break;
    default:
        printf("%c is not a vowel.\n", choice);
    }
}