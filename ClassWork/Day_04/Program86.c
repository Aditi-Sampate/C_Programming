/*
            Operation ||
    --------------------------------------
    Result1     Result2     Final Result
    --------------------------------------
     TRUE       TRUE            TRUE   (short circuit evaluation)
     TRUE       FALSE           TRUE   (short circuit evaluation)
     FALSE      TRUE            TRUE
     FALSE      FALSE           FALSE   
    --------------------------------------
    
    -   | : bitwise OR operator
*/

#include<stdio.h>
#include<stdlib.h>

void checkDivisible(int iNo)
{
    if(((iNo % 3) == 0) || ((iNo % 5)==0))  
    {
        printf("It is Divisible by 3 or 5\n");
    }
    else
    {
        printf("It is Not Divisible by 3 or 5\n");
    }
}

int main()
{   
    int iValue = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    checkDivisible(iValue);

    return EXIT_SUCCESS;
}