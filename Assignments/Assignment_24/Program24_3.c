/*Write a program which accept string from user and accept one character. Return index of first occurrence of that character.
Input:  "Marvellous Multi OS"
        M
Output: 0
Input:  "Marvellous Multi OS"
        W
Output: -1
Input:  "Marvellous Multi OS"
        e
Output: 4
*/

#include<stdio.h>
#include<stdlib.h>

int FirstChar(char *str,char ch)
{
    int iIndex = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            return iIndex;
        }
       str++;
       iIndex++;
    }
    
    return -1;   
}


int main()
{
    char arr[20];
    char cValue = '\0';
    int iRet = 0;
    
    printf("Enter String :\n");
    scanf("%[^\n]s",arr);

    printf("Enter the character :\n");
    scanf(" %c",&cValue);

    iRet = FirstChar(arr,cValue);

    printf("Character location is : %d",iRet);

    return EXIT_SUCCESS;
}