#include<stdio.h>

/////////////////////////////////////////////////////////////
//
//  Function Name   :   PrintEven
//  Input           :   Integer
//  Output          :   None
//  Description     :   Prints the first iNo even numbers
//  Date            :   22/10/2026
//  Author          :   Omkar Shivaji Bodake
//
/////////////////////////////////////////////////////////////

void PrintEven(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        return;
    }
    else
    {
        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            printf("%d\t",iCnt * 2);
        }    
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}