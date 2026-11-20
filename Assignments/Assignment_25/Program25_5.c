#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////
////
////  Function Name   :   DisplaySchedule
////  Input           :   Character
////  Output          :   None
////  Description     :   Displays examination schedule based on student division.
////  Date            :   20/11/2026
////  Author          :   Omkar Shivaji Bodake
////
////////////////////////////////////////////////////////////////////

void DisplaySchedule(char ch)
{
    if(ch == 'A' || ch == 'a')
    {
        printf("Your exam at 7 AM\n");
    }
    else if(ch == 'B' || ch == 'b')
    {
        printf("Your exam at 8:30 AM\n");
    }
    else if(ch == 'C' || ch == 'c')
    {
        printf("Your exam at 9:20 AM\n");
    }
    else if(ch == 'D' || ch == 'd')
    {
        printf("Your exam at 10:30 AM\n");
    }
    else
    {
        printf("Invalid Input\n");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter your devision:\n");
    scanf(" %c",&cValue);

    DisplaySchedule(cValue);

    return EXIT_SUCCESS;
}
