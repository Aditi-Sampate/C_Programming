#include<stdio.h>
#include<stdlib.h>

int Summation(int Arr[],int iLength)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }

    return iSum;
}

float Average(int Arr[],int iLength)
{
    int iCnt = 0;
    int iSum = 0;
    float iAvg = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }

    iAvg = iSum / iLength;

    return iAvg;
    //return (iSum / iLength);
}

int main()
{
    int *ptr = NULL;
    int iSize = 0, iCnt = 0;
    int iRet = 0;
    float fRet = 0.0f;

    printf("Enter number of elements you want :\n");
    scanf("%d",&iSize);

    //Step 1 : Allocate the memory
    ptr = (int *)malloc(sizeof(int) * iSize);
    
    //step 2: Use the memory
    printf("Enter the elements :\n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Summation(ptr,iSize);
    printf("Addition of all elements :%d\n",iRet);
    
    fRet = Average(ptr,iSize);
    printf("Average is : %f\n",fRet);

    //Step 3 : free the memory
    free(ptr);

    return EXIT_SUCCESS;
}