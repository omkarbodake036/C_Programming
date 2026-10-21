#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CheckNumber
//  Input           :   Integer
//  Output          :   None
//  Description     :   Checks whether the given number is positive, negative, or zero
//  Date            :   22/10/2026
//  Author          :   Omkar Shivaji Bodake
//
////////////////////////////////////////////////////////////////////

void CheckNumber(int iValue)
{
    if(iValue == 0)
    {
        printf("Zero\n");
    }
    else if(iValue > 0)
    {
        printf("Positive Number\n");
    }
    else
    {
        printf("Negative Number\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number:\n");
    scanf("%d",&iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}
