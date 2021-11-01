/*Print a pattern of numbers from  to  as shown below. Each of the numbers is separated by a single space.
                            for n = 4:
                            output:
                            4 4 4 4 4 4 4  
                            4 3 3 3 3 3 4   
                            4 3 2 2 2 3 4   
                            4 3 2 1 2 3 4   
                            4 3 2 2 2 3 4   
                            4 3 3 3 3 3 4   
                            4 4 4 4 4 4 4 
*/
// Here i've used cartesian plane apporoach, where (0,0) would be 1.
#include <stdio.h>
#include <stdlib.h>
int MAX(int a, int b)
{
    if(a > b)
        return a;
    else
        return b;
}
int main()
{   
    int n;
    scanf("%d", &n);
    for (int i = -n + 1; i < n; i++)
    {
        for (int j = -n + 1; j < n; j++)
        {
            printf("%d ", MAX(abs(i), abs(j)) + 1);
        }
        printf("\n");
    }
}
