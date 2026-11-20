#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////
////
////  Function Name   :   Display
////  Input           :   Character
////  Output          :   None
////  Description     :   Displays ASCII value of the given character in decimal, octal and hexadecimal formats.
////  Date            :   20/11/2026
////  Author          :   Omkar Shivaji Bodake
////
////////////////////////////////////////////////////////////////////

void Display(char ch)
{
    printf("Decimal\t%d\nOctal\t%o\nHexadeciaml\t%x\n",ch,ch,ch );
}

int main()
{
    char cValue = '\0';

    printf("Enter the character:\n");
    scanf(" %c",&cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}