/*
Input : 4
Output: A B C D
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char ch = '\0';

    for(ch = 'A'; ch <= 'D'; ch++)
    {
        printf("%c\n",ch);
    }

    return EXIT_SUCCESS;
}

/*  
    %d - decimal
    %c - character
    %o - octal
    %x - hexadecimal
*/