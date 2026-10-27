#include<stdio.h>
#include<stdlib.h>

void checkDivisible(int iNo)
{
    if((iNo % 3) == 0) 
    {
        if((iNo % 5)==0)
        {
            printf("It is Divisible by 3 and 5\n");
        }
        else
        {
            printf("It is not Divisible by 3 and 5\n");
        }
    }
    else
    {
        printf("It is Not Divisible by 3\n");
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