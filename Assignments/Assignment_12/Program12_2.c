/*Write a program which accept number form user and check whether it contains 0 in it or not.
Input: 2395
Output:There is no zero
Input: 1018
Output: It contains zero
Input: 9000
Output:It contains zero
Input: 10687
Output:It contains zero
*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    while(iNo > 0)
    {
        if((iNo % 10) == 0)
        {
            return TRUE;
        }
        iNo = iNo / 10;
    }
    return FALSE;
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("It contains Zero\n");
    }
    else
    {
        printf("There is no  Zero\n");
    
    }
    return 0;
}