//To check whether the entered character is in lower case or not
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character\n");
    scanf("%c", &ch);
    if(ch>=97 && ch<=122){
        printf("The entered character is in lower case\n");
    }
    else{
        printf("The entered character is not in lower case\n");
    }
    return 0;
}
