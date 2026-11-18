#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Pattern
//  Input           :   Integer, Integer
//  Output          :   None
//  Description     :   Displays hash symbols on the anti-diagonal and stars elsewhere
//  Date            :   18/11/2026
//  Author          :   Omkar Shivaji Bodake
//
////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    if(iRow <= 0 || iCol <= 0)
    {
        printf("Invalid input\n");
        return;
    }

    for(j = 1; j <= iRow; j++)
    {
        for(i = 1; i <= iCol; i++)
        {
            if(i + j  == iCol + 1)
            {
                printf("#\t");
            }
            else
            {
                printf("*\t");
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