#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name   :   MultipleDisplay
//  Input           :   Integer
//  Output          :   None
//  Description     :   Displays the first five multiples of the given number
//  Date            :   30/10/2026
//  Author          :   Omkar Shivaji Bodake
//
////////////////////////////////////////////////////////////////////

void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    int iMul = 0;

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        iMul = iNo * iCnt;
        printf("%d\t",iMul);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}