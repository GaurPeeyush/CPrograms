#include<stdio.h>
void printarray(int *ptr, int n){
    for(int i=0; i<n; i++){
        printf("The value of element %d is %d\n", i+1, *(ptr+i));
    }
}
int main(){
    int size;
    printf("Enter the size of array\n");
    scanf("%d", &size);
    int arr[size];
    for(int i=0; i<size; i++){
    printf("Enter the value of element %d: \n", i+1);
    scanf("%d", &arr[i]);
    }
    printarray(arr, size);
    return 0;
}
