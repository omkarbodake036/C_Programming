#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////
////
////  Function Name   :   DisplayASCII
////  Input           :   None
////  Output          :   None
////  Description     :   Displays ASCII values from 0 to 255
////  Date            :   20/11/2026
////  Author          :   Omkar Shivaji Bodake
////
////////////////////////////////////////////////////////////////////

void DisplayASCII()
{
    int iNo = 0;

    printf("Symbol\tDecimal\tHexadecimal\tOctal\n");

    for(iNo = 0; iNo <= 255; iNo++)
    {
        printf("%c\t%d\t%x\t\t%o\n",iNo,iNo,iNo,iNo);
    }
}

int main()
{
    DisplayASCII();

    return EXIT_SUCCESS;
}