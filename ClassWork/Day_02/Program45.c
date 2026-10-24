//find the average

#include<stdio.h>
#include<stdlib.h>

float Average(int iNo1, int iNo2)
{
    float fAns = 0.0f;

    //typecasting
    fAns = ((float)iNo1 + (float)iNo2) / 2;

    return fAns;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float iResult = 0.0;

    printf("Enter First Number :\n");
    scanf("%d",&iValue1);
    
    printf("Enter Second Number :\n");
    scanf("%d",&iValue2);
    
    iResult = Average(iValue1, iValue2);

    printf("Average is :%f\n",iResult);

    return EXIT_SUCCESS;

}