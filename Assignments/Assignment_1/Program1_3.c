//3.Program to print 5 to 1 numbers on screen.

#include<stdio.h>
#include<stdlib.h>

void Display()
{
    int i=0;
    int j=5;

    while(j > i)
    {
        printf("%d\t",j);
        j--;
    }
}

int main()
{
    Display();

    return EXIT_SUCCESS;
}