/*8967  -> 6    8
Odd :7
even:6
odd:9
even:8
*/
#include<stdio.h>
#include<stdlib.h>

void DisplayDigits(int iNo)
{
    int iDigit=0;
  
    while(iNo != 0)
    {
        iDigit = iNo % 10;
     
         if(iDigit % 2 == 0)
        {
            printf("Even Number %d\n",iDigit);
        }
        else
        {
            printf("Odd Number %d\n",iDigit);
        }
        
        iNo = iNo / 10;

    }
}

int main()
{
    int iValue=0;

    printf("Enter Number: \n");
    scanf("%d",&iValue);

    DisplayDigits(iValue);

    return EXIT_SUCCESS;
}