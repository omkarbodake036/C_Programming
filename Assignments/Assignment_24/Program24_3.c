#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////
////
////  Function Name   :   FirstChar
////  Input           :   String, Character
////  Output          :   Integer
////  Description     :   Returns the index of the first occurrence of the given character.
////  Date            :   20/11/2026
////  Author          :   Omkar Shivaji Bodake
////
////////////////////////////////////////////////////////////////////

int FirstChar(char *str, char ch)
{
    int i = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            return(i);
        }

        i++;
        str++;
    }

    return(-1);
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

    iRet = FirstChar(arr,cValue);

    printf("Character location is %d",iRet);

    return EXIT_SUCCESS;
}