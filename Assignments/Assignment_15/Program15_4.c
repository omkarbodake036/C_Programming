#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Multiply
//  Input           :   Integer, Integer, Integer
//  Output          :   Integer
//  Description     :   Multiplies all non-zero numbers among three inputs
//  Date            :   04/11/2026
//  Author          :   Omkar Shivaji Bodake
//
////////////////////////////////////////////////////////////////////

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iMult = 1;
    int iCnt = 0;

    if(iNo1 != 0)
    {
        iMult = iMult * iNo1;
        iCnt++;
    }

    if(iNo2 != 0)
    {
        iMult = iMult * iNo2;
        iCnt++;
    }

    if(iNo3 != 0)
    {
        iMult = iMult * iNo3;
        iCnt++;
    }

    if(iCnt == 0)
    {
        return 0;
    }

    return iMult;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;
    int iRet = 0;

    printf("Please enter three numbers:\n");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("Multiplication is: %d\n", iRet);

    return EXIT_SUCCESS;
}
