//Create an array and print table of 5
#include<stdio.h>
int main(){
    int arr[10];
    for(int i = 1; i<11; i++){
    arr[i-1] = 5*i; 
    }
    for(int i = 0; i<10; i++){
        printf("5X%d = %d\n", i+1, arr[i]);
    }
}
