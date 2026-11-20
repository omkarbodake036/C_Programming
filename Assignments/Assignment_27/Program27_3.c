#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Difference
//  Input           :   String
//  Output          :   Integer
//  Description     :   Calculates the absolute difference between the frequency of small and capital characters.
//  Date            :   20/11/2026
//  Author          :   Omkar Shivaji Bodake
//
////////////////////////////////////////////////////////////////////

int Difference(char *str)
{
    int iCountCap = 0;
    int iCountSmall = 0;

    if(str == NULL)
    {
        return (-1);
    }

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCountCap++;
        }
        else if(*str >= 'a' && *str <= 'z')
        {
            iCountSmall++;
        }
        str++;
    }
    
    if(iCountCap > iCountSmall)
    {
        return(iCountCap - iCountSmall);
    }
    else
    {
        return(iCountSmall - iCountCap);
    }
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string:\n");
    scanf("%[^'\n']s",arr);

    iRet = Difference(arr);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}