#include<stdio.h>
#include<string.h>
struct employee{
 int code;
 float salary;
 char name[20];
};
int main(){
    struct employee e1;
        e1.code = 200;
        e1.salary = 250000.00;
        strcpy(e1.name, "Peeyush");
        printf("%d\n", e1.code);
        printf("%s\n", e1.name);
        printf("%.2f\n", e1.salary);
        return 0;
} 