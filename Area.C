#include<stdio.h>
int main()
{
    int length, breadth;
    printf("What is length of rectangle\n");
    scanf("%d", &length);
    printf("What is breadth of the rectangle\n");
    scanf("%d", &breadth);
    int area=length*breadth;
    printf("The area of the rectangle is %d", area);
    return 0; 
}
