#include<stdio.h>
void wrong_swap(int a, int b);
void swap(int *a, int *b);
int main(){
    int a = 4, b = 5;
    printf("The value of a and b before swap is: %d and %d\n", a, b);
    // wrong_swap won't work call cuz it calls by value
    swap(&a, &b);
    // swap will work cuz it calls by reference
    printf("The value of a and b after swap is: %d and %d\n", a, b);
    return 0;
}
void wrong_swap(int a, int b){
    int temp;
    a = temp;
    a = b;
    b = temp;
}
void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
