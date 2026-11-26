/*Accept division of student from user and depends on the division display exam timing. There are 4 division in school as A,B,C,D. Exam of division A at 7 AM, B at 8:30 AM, C at 9.20 AM and D at 10:30 AM.(Application should be case insensitive)
Input:C
Output : your exam at 9.20AM
Input:d
Output : your exam at 10.30AM
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void DisplaySchedule(char chDiv)
{   
    if((chDiv == 'A') || (chDiv == 'a'))
    {
        printf("your exam at 7 AM\n");
    }
    else if(chDiv == 'B' || chDiv == 'b')
    {
        printf("your exam at 8:30 AM\n");
    }
    else if(chDiv == 'C' || chDiv == 'c')
    {
        printf("your exam at 9:20 AM\n");
    }
    else if(chDiv == 'D' || chDiv == 'd')
    {
        printf("your exam at 10:30 AM\n");
    }
    else
    {
        printf("Invalid division entered.\n");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter your division: \n");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return EXIT_SUCCESS;
}