//program to print n natural numbers using for loop
#include<stdio.h>
int main(){
    int n, a;
    printf("Enter the value of n: \n");
    scanf("%d", &n);
    for(a = 0; a < n; a++){
    printf("%d", a+1);
    printf("\n");
    }
    return 0;
}
