#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name   :   MultFact
//  Input           :   Integer
//  Output          :   Integer
//  Description     :   Returns multiplication of proper factors of a number
//  Date            :   04/11/2026
//  Author          :   Omkar Shivaji Bodake
//
////////////////////////////////////////////////////////////////////

int MultFact(int iNo)
{
    int iCnt = 0;
    int iMult = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iMult = iMult * iCnt;
        }
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    iRet = MultFact(iValue);

    printf("%d\n", iRet);

    return EXIT_SUCCESS;
}
