/*5. Identify Character Type
Problem Statement: Accept a single character and determine whether it is an uppercase alphabet,lowercase alphabet, digit or special Character.Use character comparisons without using library character- classification functions.
Expected Output :
Input A -> UpperCase Alphabet
Input m -> LowerCase Alphabet
Input 7 -> digit
Input @ -> Special Character
*/

#include<stdio.h>
#include<stdlib.h>

void CheckCharacterType(char cValue)
{
    if(cValue >= 'A' && cValue <= 'Z')
    {
        printf("UpperCase Alphabet\n");
    }
    else if(cValue >= 'a' && cValue <= 'z')
    {
        printf("LowerCase Alphabet\n");
    }
    else if(cValue >= '0' && cValue <= '9')
    {
        printf("Digit\n");
    }
    else
    {
        printf("Special Character\n");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter a Character: \n");
    scanf("%c",&cValue);

    CheckCharacterType(cValue);

    return EXIT_SUCCESS;
}