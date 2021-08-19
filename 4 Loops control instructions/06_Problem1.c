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
/* Using for loop: 
#include<stdio.h>
int main(){
   int a, n, result;
   printf("Enter the number n:\n");
   scanf("%d", &n);
     for(a = 1; a < 11; a++){
     result = a*n;
     printf("%d*%d = %d\n", n, a, result);
     }
return 0;
}
*/
