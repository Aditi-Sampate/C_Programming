/*write a program which accept number from user and return difference between summation of all its factors and non factors.
Input:12
Ouput:-34 (16 - 50)
Input: 10
Output:-29 (8 - 37)
*/

#include<stdio.h>
#include<stdlib.h>

int FactDiff(int iNo)
{
    int iCnt = 0, iSum = 0;
    int iFact1 = 0, iFact2 = 0;

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iFact1 = iFact1 + iCnt;
        } 
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iFact2 = iFact2 + iCnt;
        } 
    }
    iSum = iFact1 - iFact2;

    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}