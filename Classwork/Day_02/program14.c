#include "Header.h"  //Double qout is used coz this header file is store in the same DIR not in the System DIR where GCC is
/////////////////////////////////////////////////////////////
//
//  Entry point of the application
//
/////////////////////////////////////////////////////////////
int main()
{
    int iValue1=0, iValue2=0, iResult=0;

    printf("Enter first number:\n");
    if(scanf("%d",&iValue1) !=1)  
    {
        fprintf(stderr,"Unable to proceed as invalid input\n");
        return EXIT_FAILURE;
    }
    
    printf("Enter second number:\n");
    if(scanf("%d",&iValue2) !=1)
    {
        fprintf(stderr,"Unable to proceed as invalid input\n");
        return EXIT_FAILURE;
    }

    iResult=Addition(iValue1,iValue2);  

    printf("Addition is:%d\n",iResult);

    return EXIT_SUCCESS;
}
