#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CalculateDiscount
//  Input           :   Float
//  Output          :   None
//  Description     :   Calculates the discount and final payable amount based on the purchase amount
//  Date            :   22/10/2026
//  Author          :   Omkar Shivaji Bodake
//
////////////////////////////////////////////////////////////////////

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if(fAmount < 0)
    {
        printf("Invalid input!!\n");
    }
    else if(fAmount < 1000)
    {
        fFinalAmount = fAmount;
        printf("Payable Amount = %.2f",fFinalAmount);
    }
    else if(fAmount < 5000)
    {
        fDiscount = (fAmount*10)/100;
        fFinalAmount = fAmount - fDiscount;
        printf("Payable Amount = %.2f",fFinalAmount);        
    }
    else
    {
        fDiscount = (fAmount*20)/100;
        fFinalAmount = fAmount - fDiscount;
        printf("Payable Amount = %.2f",fFinalAmount);        
    }
}

int main()
{
    float fAmount = 0.0f;

    printf("Enter purchase amount:\n");
    scanf("%f",&fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}
