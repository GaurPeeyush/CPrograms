#include<stdio.h>
#include<string.h>
int main(){
    char *source = "Peeyush";
    char target[] = "My name is ";
    strcpy(target, source);
    printf("Now the target is replaced with source: %s", target);
    return 0;
}
