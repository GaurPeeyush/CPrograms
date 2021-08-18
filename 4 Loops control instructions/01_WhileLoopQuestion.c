// print natural numbers from 10 to 20, when initial loop counter is initialized to 0
#include <stdio.h>
int main()
{
    int a = 0;
    while (a <= 20)
    {
        if (a >= 10)
        {
            printf("%d\n", a);
        }
        a++;
    }
    return 0;
}