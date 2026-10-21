#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name   :   FindGreater
//  Input           :   Integer,Integer
//  Output          :   None
//  Description     :   Displays the greater of two numbers or checks if both are equal
//  Date            :   22/10/2026
//  Author          :   Omkar Shivaji Bodake
//
////////////////////////////////////////////////////////////////////

void FindGreater(int iFirst, int iSecond)
{
    if(iFirst > iSecond)
    {
        printf("%d is Greater\n",iFirst);
    }
    else if(iSecond > iFirst)
    {
        printf("%d is Greater\n",iSecond);
    }
    else
    {
        printf("Both Numbers Are Equal\n");
    }
    
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter two numbers:\n");
    scanf("%d %d",&iValue1,&iValue2);

    FindGreater(iValue1, iValue2);

    return EXIT_SUCCESS;
}
