#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name   :   FhtoCs
//  Input           :   Float
//  Output          :   Double
//  Description     :   Converts temperature from Fahrenheit
//                      to Celsius
//  Date            :   02/11/2026
//  Author          :   Omkar Shivaji Bodake
//
////////////////////////////////////////////////////////////////////

double FhtoCs(float fTemp)
{
    double dCel = 0.0;

    dCel = (fTemp - 32) * (5.0 / 9.0);

    return dCel;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit:\n");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Celsius: %.4lf\n", dRet);

    return EXIT_SUCCESS;
}