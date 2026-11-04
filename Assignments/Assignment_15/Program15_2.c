#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

////////////////////////////////////////////////////////////////////
//
//  Function Name   :   ChkGreater
//  Input           :   Integer
//  Output          :   BOOL
//  Description     :   Checks whether a number is greater than 100
//  Date            :   04/11/2026
//  Author          :   Omkar Shivaji Bodake
//
////////////////////////////////////////////////////////////////////

BOOL ChkGreater(int iNo)
{
    if(iNo > 100)
    {
        return TRUE;
    }

    return FALSE;
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Please enter number:\n");
    scanf("%d", &iValue);

    bRet = ChkGreater(iValue);

    if(bRet == TRUE)
    {
        printf("Greater\n");
    }
    else
    {
        printf("Smaller\n");
    }

    return EXIT_SUCCESS;
}
