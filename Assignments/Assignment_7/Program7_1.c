/*Write a program which accept number from user and print that number of $ & * on screen.
Input :5
output:$ * $ * $ * $ * $ *

Input:3
output:$ * $ * $ * 

Input:-3
output:$ * $ * $ * 
*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int iCnt =0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt=1; iCnt <= iNo; iCnt++)
    {
        printf("$  *\t");
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}