#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////
////
////  Function Name   :   Display
////  Input           :   Character
////  Output          :   None
////  Description     :   Toggles the case of an alphabet 
////  Date            :   20/11/2026
////  Author          :   Omkar Shivaji Bodake
////
////////////////////////////////////////////////////////////////////

void Display(char ch)
{
    if(ch >= 'a' && ch <= 'z')
    {
        printf("%c\n",(ch-32));
    }
    else if(ch >= 'A' && ch <= 'Z')
    {
        printf("%c\n",(ch+32));
    }
    else
    {
        printf("%c\n",ch);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character:\n");
    scanf(" %c",&cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}