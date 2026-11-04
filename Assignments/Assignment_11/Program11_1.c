#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name   :   RangeDisplay
//  Input           :   Integer, Integer
//  Output          :   None
//  Description     :   Displays all numbers between the given range
//  Date            :   04/11/2026
//  Author          :   Omkar Shivaji Bodake
//
////////////////////////////////////////////////////////////////////

void RangeDisplay(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
        printf("Invalid range\n");
        return;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        printf("%d\t", iCnt);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point:\n");
    scanf("%d", &iValue1);

    printf("Enter ending point:\n");
    scanf("%d", &iValue2);

    RangeDisplay(iValue1, iValue2);

    return EXIT_SUCCESS;
}