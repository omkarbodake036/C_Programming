#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////
////
////  Function Name   :   CountChar
////  Input           :   String, Character
////  Output          :   Integer
////  Description     :   Counts the frequency of the given character in the string.
////  Date            :   20/11/2026
////  Author          :   Omkar Shivaji Bodake
////
////////////////////////////////////////////////////////////////////

int CountChar(char *str, char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCount++;
        }
        str++;
    }
    return(iCount);
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

    iRet = CountChar(arr,cValue);

    printf("Character frequency is %d",iRet);

    return EXIT_SUCCESS;
}