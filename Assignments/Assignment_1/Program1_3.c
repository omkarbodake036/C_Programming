/////////////////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Input           :   None
//  Output          :   None
//  Description     :   Displays numbers from 5 to 1
//  Date            :   20/10/2026
//  Author          :   Omkar Shivaji Bodake
//
/////////////////////////////////////////////////////////////

#include<stdio.h>

void Display()
{
    int i = 0;
    i = 5;

    while(i >= 1)
    {
        printf("%d\n",i);
        i--;
    }
}

int main()
{
    Display();
    
    return 0;
}