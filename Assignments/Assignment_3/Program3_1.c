/*1. Write a program which accept one number from user and print that number of even numbers on screen.
Input : 7
Output : 2  4   6   8   10  12  14
*/

#include<stdio.h>
#include<stdlib.h>

void PrintEven(int iNo)
{
    int iCount = 0;
    int iCnt =1;

    if(iNo <= 0)
    {
        return;
    }

    while(iCount < iNo)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d\t",iCnt);
            iCount++;
        }
        iCnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return EXIT_SUCCESS;
}
