// print first n natural numbers using do-while loop
#include <stdio.h>
int main(){
    int a = 0, n;
    printf("Enter the value of n:\n");
    scanf("%d", &n);
    do{
        printf("%d\n", a+1);
        ++a;
    } while(a<n);
    return 0;
}
