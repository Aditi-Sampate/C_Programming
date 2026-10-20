/*4.Accept one character from user and convert case of that character.
Input:a     Output:A
Input:D     Output:d
*/

#include<stdio.h>
#include<stdlib.h>

void DisplayConvert(char cValue)
{
    if((cValue >= 'A') && (cValue <= 'Z'))
    {
        printf("%c\n",cValue+32);
    }
    else if((cValue >= 'a') && (cValue <= 'z'))
    {
        printf("%c\n",cValue-32);
    }
}

int main()
{
    char cValue = '\0';
    
    printf("Enter Character\n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return EXIT_SUCCESS;
}