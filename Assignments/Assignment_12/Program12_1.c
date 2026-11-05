/*write a program which accept number form user and display its digits in reverse order.
Input: 2395
output: 5 9 3 2
Input: 1018
output: 8 1 0 1
Input: -1018
output: 8 1 0 1
Input: 9000
output: 0009
*/

#include<stdio.h>
#include<Stdlib.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\t",iDigit);
        iNo = iNo / 10;

    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayDigit(iValue);

    return EXIT_SUCCESS;
}