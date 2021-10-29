//Define a  function which prints reverse of an array
#include <stdio.h>
int reverse(int *arr, int size);
int main()
{ 
    int size;
    printf("Enter the size of array: \n");
    scanf("%d", &size);
    int arr[size];
    for(int i=0; i<size; i++){
        printf("Enter the size of elements of array: \n");
        scanf("%d", &arr[i]);
    }
    printf("The reversed array is: \n");
    reverse(arr, size);
    return 0;
}
int reverse(int *arr, int size){
for(int i=(size-1); i>-1; i--){
        printf("%d ", arr[i]);
    }
}
