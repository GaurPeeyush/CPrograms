//print multiplication table of a given number n
#include<stdio.h>
int main(){
  int a = 1, n, result;
  printf("Enter a number n:\n");
  scanf("%d", &n);
    do{
      result = a*n;
      printf("%d*%d = %d\n",n, a, result);
      a++;
      }while(a<11);
return 0;
}
