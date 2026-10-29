#include<stdio.h>
#include<stdlib.h>

void CheckPerfect(int iNo)
{
    int iCnt= 0, iSum = 0;

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\n",iCnt);

            iSum = iSum + iCnt;
        }
    }
    if(iSum == iNo)
    {
        printf("It is a Perfect Number.\n");
    }
    else
    {
        printf("It is not a Perfect Number.\n");
    }
}

int main()
{   
    int iValue = 0, iRet = 0;
    
    printf("Enter Number :\n");
    scanf("%d",&iValue);

    CheckPerfect(iValue);

    return EXIT_SUCCESS;
}

//Time Complexity : O(N/2)