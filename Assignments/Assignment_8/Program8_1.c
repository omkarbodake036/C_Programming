#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Number
//  Input           :   Integer
//  Output          :   None
//  Description     :   Classifies the given number as Small, Medium,
//                      or Large based on its value
//  Date            :   30/10/2026
//  Author          :   Omkar Shivaji Bodake
//
////////////////////////////////////////////////////////////////////

void Number(int iNo)
{
    if(iNo<50)
    {
        printf("Small\n");
    }
    else if(iNo<100)
    {
        printf("Medium\n");
    }
    else
    {
        printf("Large\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    Number(iValue);

    return EXIT_SUCCESS;
}