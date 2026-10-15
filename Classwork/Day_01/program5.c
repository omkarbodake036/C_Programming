/*
Step1: Understand the problem statement
Step2: Write the algorithm
Step3: Decide the language
Step4: Write the program 
Step5: Test the program
*/


/////////////////////////////////////////////////////////////
//  
//  Step1: Understand the problem statement
//          User is going to enter any 2 interger 
//            And we have to perform addition
//
/////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////
//  Step2: Write the algorithm
/*      
        START
            Accept first number as No1
            Accept first number as No2
            Create a variable as Ans to store the result
            Perform the addition and store into Ans
            Display the result from Ans
        END
*/         
//
/////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////
//  
//  Step3: Decide the language
//          We select C programming
//          
/////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////
//  
//  Step4: Write a program 
//          
/////////////////////////////////////////////////////////////

#include<stdio.h>

int main()
{
    int iValue1=0, iValue2=0, iResult=0;

    printf("Enter first number:\n");
    scanf("%d",&iValue1);
    
    printf("Enter second number:\n");
    scanf("%d",&iValue2);

    iResult=iValue1+iValue2;  //Bussiness Logic

    printf("Addition is:%d\n",iResult);

    return 0;
}