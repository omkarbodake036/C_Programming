#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////
////
////  Function Name   :   StrRevX
////  Input           :   String
////  Output          :   None
////  Description     :   Reverses the given string in place.
////  Date            :   20/11/2026
////  Author          :   Omkar Shivaji Bodake
////
////////////////////////////////////////////////////////////////////

void StrRevX(char *str)
{
    int iLen = 0;
    int iStart = 0;
    int iEnd = 0;
    char temp = '\0';

    while(*str != '\0')
    {
        iLen++;
        str++;
    }

    str = str - iLen;

    iEnd = iLen - 1;

    while(iStart < iEnd)
    {
        temp = str[iStart];
        str[iStart] = str[iEnd];
        str[iEnd] = temp;

        iStart++;
        iEnd--;
    }
}

int main()
{
    char arr[20];

    printf("Enter string:\n");
    scanf("%[^\n]", arr);

    StrRevX(arr);

    printf("Modified string is %s\n", arr);

    return EXIT_SUCCESS;
}