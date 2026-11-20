#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CountWhite
// Input         : String
// Output        : Integer
// Description   : Counts the whitespace characters present in the string.
// Date          : 20/11/2026
// Author        : Omkar Shivaji Bodake
//
////////////////////////////////////////////////////////////////////////////////

int CountWhite(char *str)
{
    int iCount = 0;

    if(str == NULL)
    {
        return EXIT_FAILURE;
    }

    while(*str != '\0')
    {
        if(*str == ' ')
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

    iRet = CountWhite(arr);

    printf("%d\n",iRet);

    return EXIT_SUCCESS;
}