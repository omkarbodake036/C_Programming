#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Percentage
//  Input           :   Integer, Integer
//  Output          :   Float
//  Description     :   Calculates percentage from total and obtained marks
//  Date            :   04/11/2026
//  Author          :   Omkar Shivaji Bodake
//
////////////////////////////////////////////////////////////////////

float Percentage(int iTotal, int iObtained)
{
    float fPer = 0.0f;

    if(iTotal <= 0)
    {
        return -1.0f;
    }

    fPer = ((float)iObtained / iTotal) * 100.0f;

    return fPer;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    float fRet = 0.0f;

    printf("Please enter total marks:\n");
    scanf("%d", &iValue1);

    printf("Please enter obtained marks:\n");
    scanf("%d", &iValue2);

    fRet = Percentage(iValue1, iValue2);

    if(fRet == -1.0f)
    {
        printf("Invalid total marks\n");
    }
    else
    {
        printf("Percentage is: %.2f%%\n", fRet);
    }

    return EXIT_SUCCESS;
}
