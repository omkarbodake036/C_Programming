#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name   :   OddDisplay
//  Input           :   Integer
//  Output          :   None
//  Description     :   Displays all odd numbers till given number
//  Date            :   30/10/2026
//  Author          :   Omkar Shivaji Bodake
//
////////////////////////////////////////////////////////////////////

void OddDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}