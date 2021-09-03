#include<stdio.h>
int sum(int a, int b); // function prototype decleration
int main(){
    int c;
    c = sum(2, 15); // function call
    printf("The value of c is %d\n", c);
    return 0;
}
int sum (int a, int b){
    int result;
    result = a + b;
    return result;
}