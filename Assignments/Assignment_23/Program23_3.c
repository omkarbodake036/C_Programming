#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////
//
// Function Name : strtogglex
// Input         : String
// Output        : None
// Description   : Toggles the case of each alphabet in the string.
// Date          : 20/11/2026
// Author        : Omkar Shivaji Bodake
//
//////////////////////////////////////////////////////////////////////

void strtogglex(char *str)
{
    if(str == NULL)
    {
        return;
    }

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + ('a' - 'A');
        }
        else if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - ('a' - 'A');
        }
        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string:\n");
    scanf("%[^'\n']s",arr);

    strtogglex(arr);

    printf("Modified string is %s",arr);

    return EXIT_SUCCESS;
}