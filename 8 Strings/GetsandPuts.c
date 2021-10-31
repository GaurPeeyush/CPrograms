#include<stdio.h>
int main(){
    char str[50];
    printf("Enter your string: ");
    gets(str);
    printf("Printing using printf: %s\n", str);
    printf("\n");
    printf("Printing using puts now:\n");
    puts(str);
    return 0;
}
