#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////
//
// Function Name : strlwrx
// Input         : String
// Output        : None
// Description   : Converts the string into lowercase.
// Date          : 20/11/2026
// Author        : Omkar Shivaji Bodake
//
//////////////////////////////////////////////////////

void strlwrx(char *str)
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
        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string:\n");
    scanf("%[^'\n']s",arr);

    strlwrx(arr);

    printf("Modified string is %s",arr);

    return EXIT_SUCCESS;
}