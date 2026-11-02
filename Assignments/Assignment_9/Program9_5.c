/*Write a program which returns difference between Even factorial and odd factorial of given number.
Input: 5
Output: -7  (8- 15)

Input: -5
Output: -7  (8- 15)

Input: 10
Output: 2895  (3840 - 945)
*/

#include<stdio.h>
#include<stdlib.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int evenFact=1, oddFact=1;
    int iDiffer = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d\t",iCnt);
            printf("\n");

            evenFact = evenFact * iCnt;
        }
        else
        {
            printf("%d\t",iCnt);
            printf("\n");

            oddFact = oddFact * iCnt;
        }
    }

    iDiffer = evenFact - oddFact;
    return iDiffer;
}

int main()
{
    int iValue =0, iRet =0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d",iRet);

    return EXIT_SUCCESS;
}