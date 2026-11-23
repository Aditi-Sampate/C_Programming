/*Accept number from user and display below pattern. 
Input: 8
Output: 2 4 6 8 10 12 14 16  
*/

#include <stdio.h>
#include<stdlib.h>

void Pattern(int iNo) 
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo*2; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d\t",iCnt);
        }
        
    }
    printf("\n");
}

int main() 
{
    int iValue = 0;

    printf("Enter number elements : \n");
    scanf("%d", &iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}
