//Program to print a 2D array
#include<stdio.h>
int main(){
    int i, j;
    int arr[2][2];
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("Enter the values of elements\n");
            scanf("%d", &arr[i][j]);
        }
    }
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("%d ", arr[i][j]);
            if(j==1){
                printf("\n");
            }
        }
    }
    return 0;
}
