#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name   :   FactRev
//  Input           :   Integer
//  Output          :   None
//  Description     :   Displays all proper factors in decreasing order
//  Date            :   04/11/2026
//  Author          :   Omkar Shivaji Bodake
//
////////////////////////////////////////////////////////////////////

void FactRev(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo / 2; iCnt >= 1; iCnt--)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\t", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    FactRev(iValue);

    return EXIT_SUCCESS;
}
