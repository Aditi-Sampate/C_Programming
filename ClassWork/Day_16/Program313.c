#include<stdio.h>
#include<stdlib.h>

void Display(int ptr[])
{
    printf("%d\n",*ptr);    //11
    
    ptr++;
    printf("%d\n",*ptr);    //21
    
    ptr++;
    printf("%d\n",*ptr);    //51
    
    ptr++;
    printf("%d\n",*ptr);    //101
    
    ptr++;
}

int main()
{
    int Arr[5] = {11,21,51,101,151};

    Display(Arr);   //Display(100);
    
    return EXIT_SUCCESS;
}