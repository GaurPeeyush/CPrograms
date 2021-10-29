//Program which counts number of +ve intergers in an array
#include<stdio.h>
int main(){
    int arr[] = {1, 2, -1, 0, -5, -6, 2, 8};
    int sum = 0;
    for(int i=0; i<8; i++){
        if(arr[i]>0){
            sum = sum + 1;
        }
    }
    printf("The total number of +ve integers in the array are %d\n", sum);
    return 0;
}
