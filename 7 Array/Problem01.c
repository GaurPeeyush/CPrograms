// Verify that pointer, (ptr+2) points to the third element when ptr points to first one of an array
#include<stdio.h>
int main(){
    int arr[4];
    int *ptr = &arr[0];
    ptr = ptr + 2;
    if(ptr == &arr[2]){
        printf("They point to same memory location");
    }
    else{
        printf("They do not point to the same memory location");
    }
return 0;
}
