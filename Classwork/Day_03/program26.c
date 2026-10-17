#include<stdio.h>
#include<stdlib.h>


int main()
{
    char sName[30];

    printf("Enter your name:\n");
    scanf("%[^'\n']s",sName);   //Telling scanf to accept input till the Enter (It is a use of regular expression)

    printf("Welcome %s",sName);

    return EXIT_SUCCESS;
}