#include <stdio.h>
int main()
{
    int display = 1;
    for (int i = 11; i <=19; i += 2)
    {
        display = display * i;
    }
    printf("display of odd number between 10 to 20: %d", display);
}
// 11 * 13 = 143
// 143 * 15 = 2145
// 2145 * 17 = 36465
// 36465 * 19 = 692835