#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name   :   OddFactorial
//  Input           :   Integer
//  Output          :   Integer
//  Description     :   Calculates odd factorial
//  Date            :   30/10/2026
//  Author          :   Omkar Shivaji Bodake
//
////////////////////////////////////////////////////////////////////

int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt > 0; iCnt--)
    {
        if(iCnt % 2 != 0)
        {
            iFact = iFact * iCnt; 
        }     
    }
    return(iFact);
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is %d",iRet);

    return EXIT_SUCCESS;
}