//C program to display the results
//To pass in examination, student muust score atlest 33% in each subject and overall 40%.
//Take only three subjects and write the program!
#include <stdio.h>
int main()
{
    int phy, chem, maths;
    printf("Enter Physics marks\n");
    scanf("%d", &phy);
    printf("Enter Chemistry marks\n");
    scanf("%d", &chem);
    printf("Enter Maths marks\n");
    scanf("%d", &maths);
     float sum;
    sum = (phy + chem + maths) / 3;
    if ((sum < 40) || phy < 33 || chem < 33 || maths < 33)
    {
        printf("Your total percentage is %f and you are failed!", sum);
    }
    else
    {
        printf("Your total percentage is %f and you are passed!", sum);
    }
    return 0;
}
