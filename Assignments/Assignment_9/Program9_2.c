/*Accept amount in US dollar and return its corresponding value in Indian Currency.
Consider 1$ as 70 rupees.
Input: 10
Output: 700

Input: 3
Output: 270

Input: 1200
Output: 84000
*/

#include<stdio.h>
#include<stdlib.h>

int DollarToINR(int iNo)
{
    int iCnt=0;
    int iINR = 0;

    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        iINR = iNo * 70;
    }
    return iINR;
}

int main()
{
    int iValue=0, iRet = 0;

    printf("Enter number of USD \n");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d",iRet);

    return EXIT_SUCCESS;
}