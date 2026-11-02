/*write a program which accept temperature in Fahrenheit and convert it into celsius.
(1 celsius = (Fahrenheit - 32)* (5/9)) 
Input: 10
Output:-12.2222 (10 - 32) * (5/9)
Input: 34
Output:1.11111 (34 - 32) * (5/9)
*/

#include<stdio.h>
#include<stdlib.h>

double FhtoCs(float fTemp)
{
    double dCelsius = 0.0;

    dCelsius = (fTemp - 32 ) * 0.555;

    return dCelsius;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit :\n");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in celsius : %lf\n",dRet);

    return EXIT_SUCCESS;
}
