#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Pattern
//  Input           :   Integer, Integer
//  Output          :   None
//  Description     :   Displays a solid rectangular pattern of stars
//  Date            :   18/11/2026
//  Author          :   Omkar Shivaji Bodake
//
////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j =0;

    if(iRow <= 0 || iCol <= 0)
    {
        printf("Invalid dimensions\n");
        return;
    }

    for(j = 1; j <= iRow; j++)
    {
        for(i = 1; i <= iCol; i++)
        {
            printf("*\t");
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