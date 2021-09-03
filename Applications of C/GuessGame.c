#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int number, guess, nguess=1;
    srand(time(0));
    number = rand()%100 + 1; //Generates random number between 1 and 100
    //printf("The number is %d\n", number);
    do{
        printf("Guess the number between 1 and 100\n");
        scanf("%d", &guess);
        if(guess>number){
        printf("Choose a lower number\n");
        }
        else if(number>guess){
        printf("Choose a higher number\n");
        }
        else{ 
        printf("You guessed the number in %d attempts!\n", nguess);
        }
        nguess++;
    }while(guess!=number);
return 0;
}
