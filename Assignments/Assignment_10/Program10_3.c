#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name   :   KMtoMeter
//  Input           :   Integer
//  Output          :   Integer
//  Description     :   Converts the given distance from kilometres
//                      to metres
//  Date            :   02/11/2026
//  Author          :   Omkar Shivaji Bodake
//
////////////////////////////////////////////////////////////////////

int KMtoMeter(int iNo)
{
    int iMtr = 0;

    if(iNo <= 0)
    {
        return -1;
    }

    iMtr = iNo * 1000;
    return (iMtr);
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance:\n");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    if(iRet == -1)
    {
        printf("Invalid Input!");
    }
    else
    {
        printf("Distance in meters: %d\n",iRet);
    }

    return EXIT_SUCCESS;
}