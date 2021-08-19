//program to print the sum of natural numbers upto n
#include<stdio.h>
int main(){
    int i, n, sum = 0;
    printf("Enter the number n:\n");
    scanf("%d", &n);
    for(i = 0; i<=n; i++){
        sum +=i;
    }
    printf("The sum of natural numbers upto %d is %d\n", n, sum);
    return 0;
}
