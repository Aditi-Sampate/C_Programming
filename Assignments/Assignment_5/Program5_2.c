/*2.Check Leap Year
Problem Statement : Accept a year and determine 
whether it is a leap year according to Gregorian 
calendar rules. A year is a leap year if it is 
divisible by 400, or divisible by 4 but not by 
100. consider years less than or equal to zero invalid.
Expected Output:
Input: 2024 -> Leap Year
Input: 1900 -> Not a Leap Year
Input: 2000 -> Leap Year
*/

#include<stdio.h>
#include<stdlib.h>

void CheckLeapYear(int iYear)
{
    if(iYear <= 0)
    {
        printf("Invalid year\n");
    }
    else if((iYear % 400 == 0) || (iYear % 4 == 0) && (iYear % 100 != 0))
    {
        printf("%d is a leap year\n",iYear);
    }
    else
    {
        printf("%d is Not a leap year\n",iYear);
    }

}

int main()
{
    int iYear = 0;

    printf("Enter Year :\n");
    scanf("%d",&iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}