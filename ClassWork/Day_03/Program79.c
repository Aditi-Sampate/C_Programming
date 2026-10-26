//Input : 5
// 1 + 2 + 3 + 4 + 5 = 15 

//Input : 5
// 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 = 36

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iCnt = 0;
    int iSum = 0;

    iCnt =1;

    //iSum = 0 + 1;     --> 1
    iSum = iSum + iCnt;
    iCnt++; //2

    //iSum = 1 + 2  --> 3
    iSum = iSum + iCnt;
    iCnt++; //3
    
    //iSum = 3 +3 --> 6 
    iSum = iSum + iCnt;
    iCnt++; //4

    //iSum = 6 + 4 --> 10
    iSum = iSum + iCnt;
    iCnt++; //5
    
    //iSum = 10 + 5 --> 15
    iSum = iSum + iCnt;
    iCnt++;
    
    printf("%d\n",iSum);

    return EXIT_SUCCESS;
}


/*
void Display(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++) //short hand assignment operator
    {
        iSum = iSum + iCnt;
        
    }
    printf("%d",iSum);

}

int main()
{
    int iValue =0;

    printf("Enter the frequency : \n");
    scanf("%d",&iValue);


    Display(iValue);

    return EXIT_SUCCESS;
}
*/


// program madhe jr loop asel tr time complexity
//dynamic asel tr space complexity

