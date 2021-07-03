//An example of if else ladder
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number:\n");
    scanf("%d", &a);
    if (a == 1)
    {
        printf("The number entered is 1\n");
    }
    else if (a == 2)
    {
        printf("The number entered is 2\n");
    }
    else if (a == 3)
    {
        printf("The number entered is 3\n");
    }
    else{
        printf("The number entered isn't 1, 2, 3!");
    }
    return 0;
}
