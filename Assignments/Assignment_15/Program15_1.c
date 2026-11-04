#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name   :   main
//  Input           :   Character Array
//  Output          :   Integer
//  Description     :   Accepts and displays the full name of the user
//  Date            :   04/11/2026
//  Author          :   Omkar Shivaji Bodake
//
////////////////////////////////////////////////////////////////////

int main()
{
    char Name[30];

    printf("Please enter full name:\n");
    scanf("%[^\n]s", Name);

    printf("Your name is %s\n", Name);

    return EXIT_SUCCESS;
}
