#include<stdio.h>

/////////////////////////////////////////////////////////////
//
//  Function Name   :   DisplayEvenFactor
//  Input           :   Integer
//  Output          :   None
//  Description     :   Displays all even factors of the given number
//  Date            :   22/10/2026
//  Author          :   Omkar Shivaji Bodake
//
/////////////////////////////////////////////////////////////

void DisplayEvenFactor(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {         
        if((iNo % iCnt) == 0 && (iCnt % 2) == 0)
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

    DisplayEvenFactor(iValue);

    return 0;
}