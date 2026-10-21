#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name   :   FindGreatest
//  Input           :   Integer,Integer,Integer
//  Output          :   None
//  Description     :   Displays the greatest of three numbers
//  Date            :   22/10/2026
//  Author          :   Omkar Shivaji Bodake
//
////////////////////////////////////////////////////////////////////

void FindGreatest(int iFirst, int iSecond, int iThird)
{
    if(iFirst >= iSecond && iFirst >= iThird)
    {
        printf("%d is Greatest\n",iFirst);
    }
    else if(iSecond >= iFirst && iSecond >= iThird)
    {
        printf("%d is Greatest\n",iSecond);
    }
    else
    {
        printf("%d is Greatest\n",iThird);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;

    printf("Enter three numbers:\n");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

    FindGreatest(iValue1,iValue2,iValue3);

    return EXIT_SUCCESS;
}
