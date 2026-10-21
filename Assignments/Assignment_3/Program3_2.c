#include<stdio.h>

/////////////////////////////////////////////////////////////
//
//  Function Name   :   DisplayFactor
//  Input           :   Integer
//  Output          :   None
//  Description     :   Displays all factors of the given number
//  Date            :   22/10/2026
//  Author          :   Omkar Shivaji Bodake
//
/////////////////////////////////////////////////////////////

void DisplayFactor(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {         
        if((iNo % iCnt) == 0)
        {
            printf("%d\t",iCnt);
        }     
    }    
}

int main()
{
    int iValue = 0;

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;
}