#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Input           :   Integer
//  Output          :   None
//  Description     :   Displays "Hello" if the number is less than 10 otherwise displays "Demo"
//  Date            :   21/10/2026
//  Author          :   Omkar Shivaji Bodake
//
/////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}