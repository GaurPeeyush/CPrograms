#include<stdio.h>
int main(){
    int marks[4];
    printf("Enter marks one:\n");
    scanf("%d", &marks[0]);
    printf("Enter marks two:\n");
    scanf("%d", &marks[1]);
    printf("Enter marks three:\n");
    scanf("%d", &marks[2]);
    printf("Enter marks four:\n");
    scanf("%d", &marks[3]);
    printf("The marks you have entered are: %d, %d, %d, and %d.", marks[0], marks[1], marks[2], marks[3]);
    return 0;
}
