/*1. Calculate Electricity Bill
Problem Statement : Accept the number of electricity units consumed and calculate the total bill using the following slab-wise rates. Each slab rate applies only to units within that slab.
Units Consumed      Rate
First 100 units     rs.5 per unit
Next 100 units      rs.7 per unit
Above 200 units     rs.10 per unit

Negative unit consumption is invalid.
Expected Output :
Input: 80 -> Bill = 400.00
Input: 150 -> Bill = 850.00
Input: 250 -> Bill = 1700.00
*/

#include<stdio.h>
#include<stdlib.h>

void CalculateElectricityBill(int iUnits)
{
    float fBill = 0.0f;

    if(iUnits > 1 && iUnits < 100)
    {
        fBill = iUnits * 5;
        printf("Bill : %f",fBill);
    }
    else if(iUnits > 100 && iUnits < 200)
    {
        fBill = iUnits * 7;
        printf("Bill : %f",fBill);
    }
    else if(iUnits > 200)
    {
        fBill = iUnits * 10;
        printf("Bill : %f",fBill);
    }
    else
    {
        printf("Invalid Number");
    }
}

int main()
{
    int iUnits = 0;

    printf("Enter Consumed Units :\n");
    scanf("%d",&iUnits);

    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}