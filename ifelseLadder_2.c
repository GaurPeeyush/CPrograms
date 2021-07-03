#include<stdio.h>
int main()
{
    int marks;
    printf("Enter your marks\n");
    scanf("%d", &marks);
    if(marks>100){
        printf("Invalid marks entered\n");
    }
    else if(marks>=90){
        printf("Your grade is A\n");
    }
    else if (marks>=80){
        printf("Your garde is B\n");
    }
    else if (marks>=70){
        printf("Your garde is C\n");
    }
    else if (marks>=60){
        printf("Your garde is D\n");
    }
    else if (marks>=50){
        printf("Your garde is F\n");
    }
    else{
        printf("Incorrect value entered\n");
    }
    return 0;
}
