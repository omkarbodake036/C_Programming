#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name   :   RectArea
//  Input           :   Float, Float
//  Output          :   Double
//  Description     :   Calculates the area of a rectangle using
//                      the given width and height
//  Date            :   02/11/2026
//  Author          :   Omkar Shivaji Bodake
//
////////////////////////////////////////////////////////////////////

double RectArea(float fWidth, float fHeight)
{
    double dArea = 0.0;

    if(fWidth <= 0  || fHeight <= 0)
    {
        return -1.0;
    }
    
    dArea = fWidth * fHeight;
    return(dArea);
}

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter width:\n");
    scanf("%f",&fValue1);

    printf("Enter height:\n");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);

    if(dRet == -1.0)
    {
        printf("Invalid Input!");
    }
    else
    {
        printf("Area of a rectangle is: %lf",dRet);
    }

    return EXIT_SUCCESS;
}