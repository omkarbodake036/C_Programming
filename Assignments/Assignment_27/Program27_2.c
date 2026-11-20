#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CountSmall
//  Input           :   String
//  Output          :   Integer
//  Description     :   Counts the number of small characters in a string.
//  Date            :   20/11/2026
//  Author          :   Omkar Shivaji Bodake
//
////////////////////////////////////////////////////////////////////

int CountSmall(char *str)
{
    int iCount = 0;

    if(str == NULL)
    {
        return (-1);
    }

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
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
    int iRet = 0;

    printf("Enter string:\n");
    scanf("%[^'\n']s",arr);

    iRet = CountSmall(arr);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}