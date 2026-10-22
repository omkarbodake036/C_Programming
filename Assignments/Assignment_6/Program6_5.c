#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CalculateBonus
//  Input           :   Float, Integer
//  Output          :   None
//  Description     :   Calculates the employee bonus based on salary and years of service
//  Date            :   22/10/2026
//  Author          :   Omkar Shivaji Bodake
//
////////////////////////////////////////////////////////////////////

void CalculateBonus(float fSalary, int iYears)
{
    float fBonus = 0.0f;

    if(fSalary <= 0 || iYears < 0)
    {
        printf("Invalid input\n");
    }
    else if(iYears < 5)
    {
        fBonus = (fSalary * 5)/100;
        printf("Bonus = %.2f",fBonus);
    }
    else if(iYears < 10 )
    {
        fBonus = (fSalary * 10)/100;
        printf("Bonus = %.2f",fBonus);
    }
    else
    {
        fBonus = (fSalary * 15)/100;
        printf("Bonus = %.2f",fBonus);
    }
}

int main()
{
    float fSalary = 0.0f;
    int iYears = 0;

    printf("Enter salary and years of service:\n");
    scanf("%f %d",&fSalary,&iYears);

    CalculateBonus(fSalary,iYears);

    return EXIT_SUCCESS;
}