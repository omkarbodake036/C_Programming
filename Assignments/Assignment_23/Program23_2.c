#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////
//
// Function Name : struprx
// Input         : String
// Output        : None
// Description   : Converts the string into uppercase.
// Date          : 20/11/2026
// Author        : Omkar Shivaji Bodake
//
////////////////////////////////////////////////////////

void struprx(char *str)
{
    if(str == NULL)
    {
        return;
    }
    
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
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

    struprx(arr);

    printf("Modified string is %s",arr);

    return EXIT_SUCCESS;
}