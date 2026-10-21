#include<stdio.h>

/////////////////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Input           :   Integer
//  Output          :   None
//  Description     :   Displays (*) on the screen
//  Date            :   21/10/2026
//  Author          :   Omkar Shivaji Bodake
//
/////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;
    iCnt = 1;
    while (iCnt <= iNo)
    {
        printf("*");
        iCnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}