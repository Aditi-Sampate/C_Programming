/*Write a program which accept string from user and accept one character. Return index of first occurrence of that character.
Input:  "Marvellous Multi OS"
        M
Output: 11
Input:  "Marvellous Multi OS"
        W
Output: -1
Input:  "Marvellous Multi OS"
        e
Output: 4
*/

#include<stdio.h>
#include<stdlib.h>

int LastChar(char *str,char ch)
{
    int iIndex = 0;
    int iLastOccure = -1;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iLastOccure = iIndex;
        }
       str++;
       iIndex++;
    }
    
    return iLastOccure;   
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

    iRet = LastChar(arr,cValue);

    printf("Character location is : %d",iRet);

    return EXIT_SUCCESS;
}