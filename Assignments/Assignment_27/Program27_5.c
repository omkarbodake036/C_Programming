#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Reverse
//  Input           :   String
//  Output          :   None
//  Description     :   Reverses the given string in place and displays the modified string.
//  Date            :   20/11/2026
//  Author          :   Omkar Shivaji Bodake
//
////////////////////////////////////////////////////////////////////

void Reverse(char *str)
{
    int iLen = 0;
    int iStart = 0;
    int iEnd = 0;
    char temp = '\0'; 

    if(str == NULL)
    {
        return;
    }

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
    printf("Modified string is %s\n",str);
}

int main()
{
    char arr[20];

    printf("Enter string:\n");
    scanf("%[^'\n']s",arr);

    Reverse(arr);

    return EXIT_SUCCESS;
}