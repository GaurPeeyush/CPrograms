#include<stdio.h>
int main(){
    int i = 4; // size of integer is 4 bytes
    int * ptr;
    ptr = &i;
    printf("The value of ptr is %u\n", ptr);
    ptr++; // or ptr = ptr + 1
    printf("The value of ptr++ is %u\n", ptr);
    char c = '45'; // size of character is 1 byte
    char * ptr_ch;
    ptr_ch = &c;
    printf("The value of ptr_ch is %u\n", ptr_ch);
    ptr_ch++;
    printf("The value of ptr_ch++ is %u\n", ptr_ch);
    return 0; 
}
