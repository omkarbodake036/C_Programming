#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

////////////////////////////////////////////////////////////////////
////
////  Function Name   :   ChkCapital
////  Input           :   Character
////  Output          :   BOOL
////  Description     :   Checks whether the given character is uppercase.
////  Date            :   20/11/2026
////  Author          :   Omkar Shivaji Bodake
////
////////////////////////////////////////////////////////////////////

BOOL ChkCapital(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
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
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character:\n");
    scanf(" %c",&cValue);

    bRet = ChkCapital(cValue);

    if(bRet == TRUE)
    {
        printf("It is Capital Character\n");
    }
    else
    {
        printf("It is not a Capital Character\n");
    }
    return EXIT_SUCCESS;
}

