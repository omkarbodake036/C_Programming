#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////
////
////  Function Name   :   LastChar
////  Input           :   String, Character
////  Output          :   Integer
////  Description     :   Returns the index of the last occurrence of the given character.
////  Date            :   20/11/2026
////  Author          :   Omkar Shivaji Bodake
////
////////////////////////////////////////////////////////////////////

int LastChar(char *str, char ch)
{
    int i = 0;
    int temp = -1;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            temp = i;
        }

        i++;
        str++;
    }

    return(temp);
}

int main()
{
    char arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter string:\n");
    scanf("%[^'\n']s",arr);

    printf("Enter the character:\n");
    scanf(" %c",&cValue);

    iRet = LastChar(arr,cValue);

    printf("Character location is %d",iRet);

    return EXIT_SUCCESS;
}