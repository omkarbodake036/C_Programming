#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name   :   DollarTOINR
//  Input           :   Integer
//  Output          :   Integer
//  Description     :   Converts the given amount in USD to INR
//  Date            :   30/10/2026
//  Author          :   Omkar Shivaji Bodake
//
////////////////////////////////////////////////////////////////////

int DollarTOINR(int iNo)
{
    if(iNo < 0)
    {
        return -1;
    }
    else
    {
        return(iNo * 70);
    }
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number of USD:\n");
    scanf("%d",&iValue);

    iRet = DollarTOINR(iValue);

    if(iRet == -1)
    {
        printf("Invalid input\n");
    }
    else
    {
        printf("Value in INR is %d\n",iRet);
    }
  

    return EXIT_SUCCESS;
}