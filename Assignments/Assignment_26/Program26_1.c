/*write a program which displays ASCII table. Table contains symbol,Decimal,Hexadecimal and Octal representation of every member from ) to 255.*/

#include<stdio.h>
#include<stdlib.h>

void DisplayASCII()
{
    int iCnt = 0;

    printf("Decimal\tHex\tChar\n");
    printf("-----------------------------\n");

    for(iCnt = 1; iCnt <= 127; iCnt++)
    {
        if(iCnt > 32 && iCnt <= 127)
        {
            printf("%d\t%x\t%c\n",iCnt,iCnt,iCnt);
        }
        else
        {
            printf("%d\t%x\t - \n",iCnt,iCnt);
        }
    }
}

int main()
{
    DisplayASCII();

    return EXIT_SUCCESS;
}