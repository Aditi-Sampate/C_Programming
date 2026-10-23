#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////
//
// Function Name : Addition
// Input         : Integer, Integer
// Output        : Integer
// Description   : Performs Addition
// Date          : 4/10/2026
// Author        : Sampate Aditi Anant
/////////////////////////////////////////////////////////////////////

int Addition(
                int iNo1 ,  //First input
                int iNo2    //Second input
            )   //this style of writing the variable from k & R book
{
    int iAns = 0;

    iAns = iNo1 + iNo2;     //Business Logic

    return iAns;
}

/////////////////////////////////////////////////////////////////////
//
// Entry Point of the application
//          
/////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0 , iValue2 = 0 , iResult = 0;
    
    printf("Enter First Number :\n");
    scanf("%d",&iValue1);
    
    printf("Enter Second Number :\n");
    scanf("%d",&iValue2);
    
    iResult = Addition(iValue1 , iValue2);    //Business logic

    printf("Addition is : %d\n",iResult);
    
    return EXIT_SUCCESS;
}

/////////////////////////////////////////////////////////////////////
//
// Step 5 : Test The Program
//
//  Tested Test Cases
//          
//      Input1        Input2        Output
//---------------------------------------------------------------
//         0           11             21 
//        11            0             11
//         0           11             11
//        20           -9             11
//        -9           20             11
//       -20          -11            -31
//---------------------------------------------------------------
/////////////////////////////////////////////////////////////////////
