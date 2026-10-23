#include"Header.h"

int main()
{
    int iValue1 = 0 , iValue2 = 0 , iResult = 0;
    
    printf("Enter First Number :\n");
    if(scanf("%d",&iValue1) != 1)
    {
        fprintf(stderr,"Unable to Proceed as Input is Invalid\n");

        return EXIT_FAILURE;
    }   

    printf("Enter Second Number :\n");
    if(scanf("%d",&iValue2) != 1)
    {
        fprintf(stderr,"Unable to Proceed as Input is Invalid\n");

        return EXIT_FAILURE;
    }   

    
    iResult = Addition(iValue1 , iValue2);    //Business logic

    printf("Addition is : %d\n",iResult);
    
    return EXIT_SUCCESS;
}
