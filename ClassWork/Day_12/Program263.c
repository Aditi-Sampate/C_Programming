#include<stdio.h>
#include<stdlib.h>

void CountFrequencyX(char *str)
{
    int iCountSmall = 0, iCountCapital = 0, iCountDigit = 0,iCountSpecial = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCountCapital++;
        }
        else if((*str >= 'a') && (*str <= 'z'))
        {
            iCountSmall++;
        }
        else if((*str >= '0') && (*str <= '9'))
        {
            iCountDigit++;
        }
        else
        {
            iCountSpecial++;
        }
        str++;
    }
    printf("number of capital letters is:%d\n",iCountCapital);
    printf("number of small letters is:%d\n",iCountSmall);
    printf("number of digit is :%d\n",iCountDigit);
    printf("number of special symbols is :%d\n",iCountSpecial);
}

int main()
{
    char Arr[100] = {'\0'};
    //int iRet = 0;

    printf("enter String :\n");
    scanf("%[^'\n']s",Arr);

    CountFrequencyX(Arr);
    
    return EXIT_SUCCESS;
}