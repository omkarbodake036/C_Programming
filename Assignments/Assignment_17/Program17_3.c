#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Pattern
//  Input           :   Integer, Integer
//  Output          :   None
//  Description     :   Displays alternate rows of lowercase alphabets and numbers
//  Date            :   10/11/2026
//  Author          :   Omkar Shivaji Bodake
//
////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iNo = 0;
    char ch = '\0';

    if(iRow <= 0 || iCol <= 0)
    {
        printf("Invalid input\n");
        return;
    }

    for(j = 1; j <= iRow; j++)
    {
        for(i = 1, iNo = 1, ch = 'a'; i <= iCol; i++)
        {
            if(j % 2 == 0)
            {
                printf("%d\t",iNo);
                iNo++;
            }
            else
            {
                printf("%c\t",ch);
                ch++;
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns:\n");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}