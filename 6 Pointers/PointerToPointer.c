#include<stdio.h>
int main(){
    int i=4;
    int*j;
    j=&i;
    int**k;
    k=&j;
    printf("The value of i is: %d\n", *j);
    printf("The address of i is: %u\n", j);
    printf("The value of j is: %u\n", *(&j));
    printf("The address of j is: %u\n", k);
    printf("The value of k is: %u\n", *(&k));
    return 0;
}
