#include<stdio.h>
#include<stdlib.h>

void CountFrequencyX(char *str)
{
    int iCountSmall = 0, iCountCapital = 0, iCountDigit = 0;

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
        else 
        {
            iCountDigit++;        
        }
        str++;
    }
    printf("number of capital letters is:%d\n",iCountCapital);
    printf("number of small letters is:%d\n",iCountSmall);
    printf("number of digit is :%d\n",iCountDigit);
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