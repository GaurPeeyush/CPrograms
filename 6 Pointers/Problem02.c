//Program to calculate sum and average using function
//Use pointers and print values of sum ad average
#include<stdio.h>
void SumandAverage(int a, int b, int *sum, float *avg){
    *sum = a + b;
    *avg = (float)(*sum)/2;
}
int main(){
    int i, j, sum;
    float avg;
    i = 6;
    j = 3;
    SumandAverage(i, j, &sum, &avg);
    printf("The value of sum is %d\n", sum);
    printf("The value of average is %f", avg);
    return 0;
}
