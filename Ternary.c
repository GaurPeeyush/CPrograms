#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:\n");
    scanf("%d", &a);
    (a < 5) ? printf("Number is less than 5\n") : printf("Number is not less than 5\n");
    return 0;
}
