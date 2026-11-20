#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////
////
////  Function Name   :   Display
////  Input           :   Character
////  Output          :   None
////  Description     :   Displays uppercase characters from the given character to Z or lowercase characters in reverse order to a.
////  Date            :   20/11/2026
////  Author          :   Omkar Shivaji Bodake
////
////////////////////////////////////////////////////////////////////

void Display(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        for(; ch <= 'Z'; ch++)
        {
            printf("%c\t",ch);
        }
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        for(; ch >= 'a'; ch--)
        {
            printf("%c\t",ch);
        }
    }
    else
    {
        return;
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