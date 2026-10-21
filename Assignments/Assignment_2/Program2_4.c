#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Input           :   Integer, Integer
//  Output          :   None
//  Description     :   Displays the given number a specified number of times
//  Date            :   21/10/2026
//  Author          :   Omkar Shivaji Bodake
//
//////////////////////////////////////////////////////////////////////////////

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    if(iFrequency < 0)
    {
        iFrequency = -iFrequency;
    }

    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d\t",iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    printf("Enter frequency:\n");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}