//Write a C program having variable i. Print the address of i. 
//Pass the this variable to a function and print its address. 
//Compare both the addresses.
#include<stdio.h>
void funtion(int a){
    printf("The address of variable a is %u\n", &a);
} 
int main(){
    int i = 5;
    printf("The value of i is: %d\n", i);
    funtion(i);
    printf("The address of variable i is %u", &i);
}
