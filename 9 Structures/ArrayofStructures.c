#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[20];
};
int main(){
    struct employee facebook[100];
    facebook[0].code = 1345;
    facebook[0].salary = 2456.578;
    strcpy(facebook[0].name, "Peeyush");
    printf("%d\n", facebook[0].code);
    printf("%s\n", facebook[0].name);
    printf("%f\n", facebook[0].salary);
    facebook[1].code = 2785;
    facebook[1].salary = 56789.578;
    strcpy(facebook[1].name, "Alex");
    printf("%d\n", facebook[1].code);
    printf("%s\n", facebook[1].name);
    printf("%f\n", facebook[1].salary);
    return 0;
}
