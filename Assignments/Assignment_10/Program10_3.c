/*Write a program which accept distance in kilometre and convert it into meter.
(1 kilometer = 1000 meter)
Input: 5
Output:5000
Input:12
Output:12000
*/

#include<stdio.h>
#include<stdlib.h>

int KMtoMeter(int iNo)
{
   int meter = 0;

   meter = iNo * 1000;

   return meter;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance :\n");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("distance in meter : %d\n",iRet);

    return EXIT_SUCCESS;
}