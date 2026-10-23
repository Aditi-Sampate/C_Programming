/*
    Step 1: Understand the Problem Statement
    Step 2 : Write the alogrithm
    Step 3 : Decide the programming language
    Step 4 : Write a program
    Step 5 : Test the program
*/

/////////////////////////////////////////////////////////////////////
//
// Step 1 : Understand the problem statement
//          User id going to enter any 2 integers
//          and we have to perform addition
//
/////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////
//
// Step 2 : Write the algorithm
    /*
        START
            Accept first Number as No1.
            Accept Second Number as No1
            Create a Variable as Ans to store result
            Perform the Additon and store into Ans
            display the result from Ans
        End
    */
/////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////
//
// Step 3 : Decide the programming language 
//          we select c Programming
//
/////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////
//
// Step 4 : write a program
//          
/////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Additon(int iNo1 , int iNo2)
{
    int iAns = 0;

    iAns = iNo1 + iNo2;     //Business Logic

    return iAns;
}

int main()
{
    int iValue1 = 0 , iValue2 = 0 , iResult = 0;
    
    printf("Enter First Number :\n");
    scanf("%d",&iValue1);
    
    printf("Enter Second Number :\n");
    scanf("%d",&iValue2);
    
    iResult = Additon(iValue1 , iValue2);   

    printf("Addition is : %d\n",iResult);
    
    return 0;
}

//In case of industrial programming don't write logic inside main method write in helper function
//Business logic should be reusable