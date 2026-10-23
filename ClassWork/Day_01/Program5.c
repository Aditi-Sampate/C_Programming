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

int main()
{
    int iValue1 = 0 , iValue2 = 0 , iResult = 0;
    
    printf("Enter First Number :\n");
    scanf("%d",&iValue1);
    
    printf("Enter Second Number :\n");
    scanf("%d",&iValue2);
    
    iResult = iValue1 + iValue2;    //Business logic

    printf("%d\n",iResult);
    
    return 0;
}