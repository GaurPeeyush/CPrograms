#include<stdio.h>
int factorial(int x);
int main(){
    int n;
    printf("Enter the integer n:\n");
    scanf("%d", &n);
    printf("The value of factorial of %d is %d\n", n, factorial(n));
    return 0;
}
int factorial(int x){
    if (x==1 || x==0){
        return 1;
    }
    else{
        return x*factorial(x-1);
    }
}
