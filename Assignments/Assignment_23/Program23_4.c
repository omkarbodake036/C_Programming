#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayDigit
// Input         : String
// Output        : None
// Description   : Displays the numeric digits present in the string.
// Date          : 20/11/2026
// Author        : Omkar Shivaji Bodake
//
/////////////////////////////////////////////////////////////////////////

void DisplayDigit(char *str)
{
    if(str == NULL)
    {
        return;
    }

    while(*str != '\0')
    {
        if(*str >= '0' && *str <= '9')
        {
            printf("%c",*str);
        }
        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string:\n");
    scanf("%[^'\n']s",arr);

    DisplayDigit(arr);

    return EXIT_SUCCESS;
}