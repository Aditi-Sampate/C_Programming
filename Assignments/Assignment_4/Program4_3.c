/*3. Find the Greater of Two Numbers
Problem Statement : Accept two integers and determine 
which number is greater. If both numbers are equal,
display an appropriate message.
*/

#include<stdio.h>
#include<stdlib.h>

void FindGreater(int iFirst, int iSecond)
{
    if(iFirst > iSecond)
    {
        printf("%d is greater number",iFirst);
    }
    else if(iFirst < iSecond)
    {
        printf("%d is greater number",iSecond);
    }
    else if(iFirst == iSecond)
    {
        printf("Both Numbers are equal");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter two Numbers :\n");
    scanf("%d %d",&iValue1,&iValue2);

    FindGreater(iValue1,iValue2);

    return EXIT_SUCCESS;
}