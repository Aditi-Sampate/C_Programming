#include<stdio.h>
#include<stdlib.h>

int main()
{
    char sName[30];
    int iAge=0;
    float fMarks=0.0f;


    printf("Enter your name :\n");
    scanf("%[^'\n']s",sName);   //Enter remains in input buffer(\n).

    fflush(stdin);  //to remove the last time error we can use this method also.

    printf("Enter your age :\n");
    scanf("%d",&iAge);

    printf("Enter your Marks :\n");
    scanf("%f",&fMarks);

    printf("Welcome %s\n",sName);
    printf("your age is :%d\n",iAge);
    printf("your marks is :%f\n",fMarks);

    return EXIT_SUCCESS;

}


