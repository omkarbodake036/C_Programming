#include<stdio.h>

/////////////////////////////////////////////////////////////
//
//  Function Name   :   Accept
//  Input           :   Integer
//  Output          :   None
//  Description     :   Displays (*) on the screen
//  Date            :   20/10/2026
//  Author          :   Omkar Shivaji Bodake
//
/////////////////////////////////////////////////////////////

void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*");
    }
}

int main()
{
    int iValue = 0;
    iValue = 5;

    Accept(iValue);

    return 0;
}