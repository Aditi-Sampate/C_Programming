/*  
Input: 4
Output: 1 A 2 B 3 C 4 D
*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    char ch = '\0';

    for(iCnt = 1,ch = 'A'; iCnt <= iNo; iCnt++,ch++)
    {
        printf("%d\t%c\t",iCnt,ch);
    }
    printf("\n");


}

int main()
{
    int iValue = 0;

    printf("Enter the Number :\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}