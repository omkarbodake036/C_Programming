#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

////////////////////////////////////////////////////////////////////
//
//  Function Name   :   ChkVowel
//  Input           :   String
//  Output          :   BOOL 
//  Description     :   Checks whether a string contains at least one vowel.
//  Date            :   20/11/2026
//  Author          :   Omkar Shivaji Bodake
//
////////////////////////////////////////////////////////////////////

BOOL ChkVowel(char *str)
{
    if(str == NULL)
    {
        return FALSE;
    }
    
    while(*str != '\0')
    {
        if(
            (*str == 'A') || (*str == 'E') || (*str == 'I')|| (*str == 'O')|| (*str == 'U')||
            (*str == 'e') || (*str == 'a') || (*str == 'i')|| (*str == 'o')|| (*str == 'u')
          )
        {
            return TRUE;
        }
        str++;
    }
    return(FALSE);
}

int main()
{
    char arr[20];
    BOOL bRet = FALSE;

    printf("Enter string:\n");
    scanf("%[^'\n']s",arr);

    bRet = ChkVowel(arr);

    if(bRet == TRUE)
    {
        printf("Contains Vowel\n");
    }
    else
    {
        printf("There is no Vowel\n");
    }
    return EXIT_SUCCESS;
}