#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Pattern
//  Input           :   Integer
//  Output          :   None
//  Description     :   Displays even numbers in increasing order
//  Date            :   18/11/2026
//  Author          :   Omkar Shivaji Bodake
//
////////////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        printf("Invalid Input");
        return;
    }

    for(iCnt = 2; iCnt <= (iNo*2); iCnt+=2)
    {
        printf("%d\t",iCnt);
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements:\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}