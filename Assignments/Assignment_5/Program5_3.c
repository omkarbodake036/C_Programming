#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name   :   DisplayGrade
//  Input           :   Float
//  Output          :   None
//  Description     :   Display grade according to the given marks
//  Date            :   22/10/2026
//  Author          :   Omkar Shivaji Bodake
//
////////////////////////////////////////////////////////////////////

void DisplayGrade(float fMarks)
{
    if(fMarks < 0 || fMarks > 100)
    {
        printf("Invalid Marks\n");
    }
    else if(fMarks <= 100 && fMarks >= 90)
    {
        printf("Grade A\n");
    }
    else if(fMarks <= 89 && fMarks >= 75)
    {
        printf("Grade B\n");
    }
    else if(fMarks <= 74 && fMarks >= 60)
    {
        printf("Grade C\n");
    }
    else if(fMarks <= 59 && fMarks >= 40)
    {
        printf("Grade D\n");
    }
    else
    {
        printf("Fail\n");
    }
    
}

int main()
{
    float fMarks = 0.0;

    printf("Enter marks:\n");
    scanf("%f",&fMarks);

    DisplayGrade(fMarks);

    return EXIT_SUCCESS;
}
