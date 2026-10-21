#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CheckLeapYear
//  Input           :   Integer 
//  Output          :   None
//  Description     :   Checks whether the given year is Leap
//  Date            :   22/10/2026
//  Author          :   Omkar Shivaji Bodake
//
////////////////////////////////////////////////////////////////////

void CheckLeapYear(int iYear)
{
    if(iYear <= 0)
    {
        printf("Invalid Year\n");
    }
    else if((iYear % 4 == 0) || (iYear % 400 == 0) && (iYear % 100 != 0))
    {
        printf("Leap Year\n");
    }
    else
    {
        printf("Not a Leap Year\n");
    }
    
}

int main()
{
    int iYear = 0;

    printf("Enter year:\n");
    scanf("%d",&iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}
