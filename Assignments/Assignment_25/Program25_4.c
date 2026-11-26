/*Accept character from user and check whether it is small case or not (a- z).
Input: g
Output: TRUE
Input: D
Output: False*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSmall(char ch)
{
    while(ch != '\0')
    {
        if(ch >= 'a' && ch <= 'z')
        {
            return TRUE;
        }
        else
        {
            return FALSE;
        }
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character :\n");
    scanf("%c",&cValue);

    bRet = ChkSmall(cValue);

    if(bRet == TRUE)
    {
        printf("It is Small case character\n");
    }
    else
    {
        printf("It is not a small case character\n");
    }

    return EXIT_SUCCESS;
}