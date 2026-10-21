#include<stdio.h>

/////////////////////////////////////////////////////////////
//
//  Function Name   :   DisplayConvert
//  Input           :   Character
//  Output          :   None
//  Description     :   Converts uppercase to lowercase and vice versa
//  Date            :   22/10/2026
//  Author          :   Omkar Shivaji Bodake
//
/////////////////////////////////////////////////////////////

void DisplayConvert(char cValue)
{
    if((cValue >= 'a') && (cValue <= 'z'))
    {
        cValue = cValue - 32;
        printf("%c\n", cValue);
    }
    else if((cValue >= 'A') && (cValue <= 'Z'))
    {
        cValue = cValue + 32;
        printf("%c\n", cValue);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character\n");
    scanf("%c", &cValue);

    DisplayConvert(cValue);

    return 0;
}