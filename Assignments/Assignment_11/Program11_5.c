/* Write a program which accept range from user and display all numbers in between that range in reverse order.
Input:23 35
output: 23 24 25 26 27 28 29 30 31 32 33 34 35
Input: 10 18
output:
Input:10 10
output: 10
Input:-10 2
output:
Input: 90 18
output:Invalid range
*/

#include<stdio.h>
#include<stdlib.h>

void RangeDisplayRev(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd )
    {
        printf("Invalid range\n");
    }
    else
    {
        for(iCnt = iEnd; iCnt >= iStart; iCnt--)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point: \n");
    scanf("%d",&iValue1);

    printf("Enter ending point :\n");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1,iValue2);

    return EXIT_SUCCESS;
}