/*Write a program which accept string from user and display it in reverse order.
Input:"MarvellouS"
Output: "SuollevraM"
*/

#include<stdio.h>
#include<stdlib.h>

void Reverse(char *str)
{
    char *ch = str;

    while(*str != '\0')
    {
        str++;
    }
    str--;

    while(str >= ch)
    {
        printf("%c",*str);
        str--;
    }
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String :\n");
    scanf("%[^'\n']s",arr);

    Reverse(arr);

    return EXIT_SUCCESS;
}
