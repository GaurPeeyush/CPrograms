//Concatenation of two strings
#include<stdio.h>
#include<string.h>
int main(){
    char str1[50] = "Peeyush";
    char *str2 = "Gaur";
    strcat(str1, str2);
    printf("My name is %s", str1);
    return 0;
}
