#include<stdio.h>
int sum (int a, int b);
int main(){
    int a=4, b=5;
    printf("The value of a and b is: %d and %d\n", a, b);
    printf("The sum of a and b is: %d\n", sum(a, b));
    printf("The value of a and b after function call is: %d and %d\n", a, b);
    return 0;
}
int sum (int a, int b){
    int c;
    c = a + b;
    a = 50; //NOTE: We can't change main variables by using any function
    b = 50; //Hence these values of a and b won't make any changes to their actual values.
    return c;
}
