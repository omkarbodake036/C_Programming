#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CheckCharacterType
//  Input           :   Character
//  Output          :   None
//  Description     :   Checks whether the given character is an uppercase alphabet, lowercase alphabet, digit, or special character
//  Date            :   22/10/2026
//  Author          :   Omkar Shivaji Bodake
//
////////////////////////////////////////////////////////////////////

void CheckCharacterType(char cValue)
{
    if(cValue >= 'A' && cValue <= 'Z')
    {
        printf("Uppercase Alphabet\n");
    }
    else if(cValue >= 'a' && cValue <= 'z')
    {
        printf("Lowercase Alphabet\n");
    }
    else if(cValue >= '0' && cValue <= '9')
    {
        printf("Digit\n");
    }
    else
    {
        printf("Special Character\n");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character:\n");
    scanf("%c", &cValue);

    CheckCharacterType(cValue);

    return 0;
}