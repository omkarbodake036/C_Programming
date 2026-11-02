#include<stdio.h>
#include<stdlib.h>
#define PI 3.14

////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CircleArea
//  Input           :   Float
//  Output          :   Double
//  Description     :   Calculates the area of a circle using
//                      the given radius
//  Date            :   02/11/2026
//  Author          :   Omkar Shivaji Bodake
//
////////////////////////////////////////////////////////////////////

double CircleArea(float fRadius)
{
    double dArea = 0.0;

    if(fRadius <= 0)
    {
        return -1.0;
    }

    dArea = PI * fRadius * fRadius;
    return(dArea);
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter radius:\n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);
    
    if(dRet == -1.0)
    {
        printf("Invalid Input!");
    }
    else
    {
        printf("Area of a circle is: %.4lf",dRet);
    }

    return EXIT_SUCCESS;
}