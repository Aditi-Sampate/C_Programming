/*3. Calculate Shopping Discount
Problem Statement : Accept the total purchase amount and calculate the final payable amount after applying 
the following discount. Negative purchase amounts are invalid.
Purchase Amount             Discount
Below rs.1000                   0%
rs.1000 to below rs.5000        10%
rs.5000 and above               20%
Expected Output:
Input: 800 -> payable Amount = 800.00
Input: 2000 -> payable Amount = 1800.00
Input: 6000 -> payable Amount = 4800.00
*/

#include<stdio.h>
#include<stdlib.h>

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if(fAmount>0 && fAmount < 1000)
    {
        printf("0 percent discount applied on below rs.1000");
    }
    else if(fAmount >= 1000 && fAmount < 5000)
    {
        fDiscount = fAmount * 0.10 ;
        fFinalAmount = fAmount - fDiscount;
        printf("Final Amount is : %f",fFinalAmount);
    }
    else if(fAmount >= 5000)
    {
        fDiscount = fAmount * 0.20 ;
        fFinalAmount = fAmount - fDiscount;
        printf("Final Amount is : %f",fFinalAmount);
    }
    else
    {
        printf("Invalid amount");
    }
}

int main()
{
    float fAmount = 0.0f;

    printf("Enter Purchase amount :\n");
    scanf("%f",&fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}