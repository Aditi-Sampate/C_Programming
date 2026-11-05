/*write a program which accept range from user and return addition of all even numbers in between that range.
(Range should contains positive numbers only)
Input:23 30
Output:108
Input:10 18
output:70
Input:-10 2
output:Invalid range
Input:90 18
output:Invalid range*/

#include<stdio.h>
#include<stdlib.h>

int RangeSumEven(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;


    if(iStart > iEnd || iStart <= 0 || iEnd <= 0)
    {
        return -1;
    }
    else
    {
        for(iCnt = iStart; iCnt <= iEnd; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                iSum = iSum + iCnt;
            }
        }
    }
    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point :\n");
    scanf("%d",&iValue1);

    printf("Enter ending point :\n");
    scanf("%d",&iValue2);

    iRet = RangeSumEven(iValue1,iValue2);

    if(iRet == -1)
    {
        printf("Invalide range\n");
    }
    else
    {
        printf("Addition is %d",iRet);
    }

    return EXIT_SUCCESS;
}