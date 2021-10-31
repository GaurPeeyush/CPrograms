#include<stdio.h>
#include<string.h>
int main(){
    char str1[50] = "Peeyush";
    char *str2 = "Gaur";
    int val = strcmp(str1, str2);
    printf("Value is: %d", val);
    return 0;
}
