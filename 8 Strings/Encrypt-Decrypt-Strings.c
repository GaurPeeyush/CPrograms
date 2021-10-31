#include<stdio.h>
void encrypt(char *str){
    char *ptr = str; 
    while(*ptr!=0){
        *ptr = *ptr + 1;
        ptr++;
    }
}
void decrypt(char *str2){
    char *ptr = str2; 
    while(*ptr!=0){
        *ptr = *ptr - 1;
        ptr++;
    }
}
int main(){
    char str[] = "My name is Peeyush";
    char str2[] = "Nz!obnf!jt!Qffzvti";
    encrypt(str);
    printf("Encrypted message is: %s\n", str);
    decrypt(str2);
    printf("Decrypted message is: %s\n", str2);
    return 0;
}
