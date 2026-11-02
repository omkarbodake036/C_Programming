#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name   :   SquareMeter
//  Input           :   Integer
//  Output          :   Double
//  Description     :   Converts area from square feet to
//                      square metres
//  Date            :   02/11/2026
//  Author          :   Omkar Shivaji Bodake
//
////////////////////////////////////////////////////////////////////

double SquareMeter(int iValue)
{
    double dMtr = 0.0;

    if(iValue <= 0)
    {
        return -1.0;
    }

    dMtr = iValue * 0.0929;

    return (dMtr);
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet:\n");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);
    
    if(dRet == -1.0)
    {
        printf("Invalid Input!");
    }
    else
    {
        printf("Area in square meter: %lf\n",dRet);
    }

    return EXIT_SUCCESS;
}