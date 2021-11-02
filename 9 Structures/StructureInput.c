#include<stdio.h>
struct employee{
    char name[50];
    float salary;
    int usn;
};
int main(){
    struct employee e1;
    printf("Enter the name of the employee: \n");
    gets(e1.name);
    
    printf("Enter the name of the salary of the employee: \n");
    scanf("%f", &e1.salary);

    printf("Enter the USN of the employee: \n");
    scanf("%d", &e1.usn);

    return 0;

}
