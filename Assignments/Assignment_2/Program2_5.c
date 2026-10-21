#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

////////////////////////////////////////////////////////////////////
//
//  Function Name   :   ChkEven
//  Input           :   Integer
//  Output          :   BOOL
//  Description     :   Checks whether the number even or odd
//  Date            :   21/10/2026
//  Author          :   Omkar Shivaji Bodake
//
////////////////////////////////////////////////////////////////////

BOOL ChkEven(int iNo)
{
    if((iNo % 2) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number:");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);

    if(bRet == TRUE)
    {
        printf("Entered number is even");
    }
    else
    {
        printf("Entered number is odd");
    }

    return 0;
}