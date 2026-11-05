/*write a program which accept total marks and obtained marks from user and calculate percentage.
Input: 1000 745
Ouput:74.5%
*/

#include<stdio.h>
#include<stdlib.h>

float Percentage(int  iNo1, int iNo2)
{
    float fPercentage = 0.0f;

    if(iNo1 == 0)
    {
        return 0.0f;
    }
    
    fPercentage = ((float)iNo2 / iNo1) * 100;

    return fPercentage;
}

int main()
{
    int iValue1 =0, iValue2 = 0;
    float fRet = 0.0f;

    printf("please enter total marks :\n");
    scanf("%d",&iValue1);

    printf("please enter obtained marks :\n");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);

    printf("Percentage is : %f",fRet);

    return EXIT_SUCCESS;
}