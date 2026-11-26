/*Accept character from user. If it is capital then display all the characters from the input characters till Z. if input character is small then print all the character in reverse order till a.In other cases return directly.
Input:Q
Ouptut:Q R S T U V W X Y Z
Input:m
Ouptut:m l k j i h g f e d c b a
Input:8
Ouptut:
*/

#include<stdio.h>
#include<stdlib.h>

void Display(char ch)
{
   char iCnt = '\0';

   if(ch >= 'A' && ch <= 'Z')
   {
        for(iCnt = ch; iCnt <= 'Z'; iCnt++)
        {
            printf("%c\t",iCnt);
        }
        printf("\n");
   }
   else if(ch >= 'a' && ch <= 'z')
   {
        for(iCnt = ch; iCnt >= 'a'; iCnt--)
        {
            printf("%c\t",iCnt);
        }
        printf("\n");
   }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character :\n");
    scanf("%c",&cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}