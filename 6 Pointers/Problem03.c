//C program to change the value of a variable to 10 times its current value
//Write a function and pass the value by reference
#include<stdio.h>
void fun(int *a, int *b){
    *b = 100*(*a);
}
int main(){
    int a = 20, b;
    fun(&a, &b);
    printf("The value of 10 times of a is %d\n", b);
    return 0;
}
