//program to print factorial of a number
#include<stdio.h>
int main(){
    int i, n, factorial = 1;
    printf("Enter the number n:\n");
    scanf("%d", &n);
    for(i = 1; i<=n; i++){
        factorial *= i;
    }
    printf("The factorial of %d is %d\n", n, factorial);
    return 0;
}
