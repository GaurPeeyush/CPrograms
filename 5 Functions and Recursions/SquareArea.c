#include<stdio.h>
#include<math.h>
int main(){
  int side;
  printf("Enter the value of side:\n");
  scanf("%d", &side);
  printf("The area of square is %f", pow(side, 2));
  return 0;
}
