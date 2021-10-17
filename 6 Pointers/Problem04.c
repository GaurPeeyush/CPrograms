//Program to print value of variable using pointer to pointer
#include<stdio.h>
int main(){
    int i = 4;
    int * j; //pointer
    int ** k; //pointer to pointer
    j = &i;
    k = &j;
    printf("The value of i is: %d", *(*k));
    return 0;
}
