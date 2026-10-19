#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Check
//  Input           :   Integer
//  Output          :   BOOL
//  Description     :   Checks whether the number is divisible by 5
//  Date            :   20/10/2026
//  Author          :   Omkar Shivaji Bodake
//
////////////////////////////////////////////////////////////////////

BOOL Check(int iNo)
{
    if((iNo % 5) == 0)
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

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }

    return 0;
}