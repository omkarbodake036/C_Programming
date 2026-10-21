#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CheckDivisibility
//  Input           :   Integer 
//  Output          :   None
//  Description     :   Checks whether the given number is divisible by 5
//  Date            :   22/10/2026
//  Author          :   Omkar Shivaji Bodake
//
////////////////////////////////////////////////////////////////////

void CheckDivisibility(int iValue)
{
    if(iValue % 5 == 0)
    {
        printf("Divisible by 5\n");
    }
    else
    {
        printf("Not Divisible by 5\n");
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter a number:\n");
    scanf("%d",&iValue);

    CheckDivisibility(iValue);

    return EXIT_SUCCESS;
}
