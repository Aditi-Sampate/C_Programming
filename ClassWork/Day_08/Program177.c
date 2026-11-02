/*check wheter Pallindrome number
8998
14341*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPallindrome(int iNo)
{
    int iDigit=0;
    int iRev=0;
    int iTemp = 0;

    iTemp = iNo;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        iRev = (iRev * 10) + iDigit;

        iNo = iNo /10;
    }

    if(iRev == iTemp)     //issue solved
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    int iValue=0;
    bool bRet= false;

    printf("Enter Number: \n");
    scanf("%d",&iValue);

    bRet = CheckPallindrome(iValue);
    
    if(bRet == true)
    {
        printf("it is Pallindrome number\n");
    }
    else
    {
        printf("it is not Pallindrome number\n");
    }

    return EXIT_SUCCESS;
}