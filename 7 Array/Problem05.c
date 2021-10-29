// Make a 3X10 array, print table of 2, 7 and 9 in 1st, 2nd, and 3rd row respectively
#include<stdio.h>
int main(){
    int arr[3][10], i, j;
    for(i = 0; i<3; i++){
        for(j = 0; j<10; j++){
            if(i==0){
            printf("%d ", 2*(j+1));
            if(j==9){
                printf("\n");
            }
        }
        else if(i==1){
            printf("%d ", 7*(j+1));
            if(j==9){
                printf("\n");
            }
        }
        else{
            printf("%d ", 9*(j+1));
        }
    }
}
return 0;
}
