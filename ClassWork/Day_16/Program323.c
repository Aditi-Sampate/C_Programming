#include<stdio.h>
#include<stdlib.h>

void Display()
{
    

}

int main()
{
    int *ptr = NULL;
    int iSize = 0;

    printf("Enter number of elements you want :\n");
    scanf("%d",&iSize);

    //Step 1 : Allocate the memory
    ptr = (int *)malloc(sizeof(int) * iSize);
    
    //step 2: Use the memory


    //Step 3 : free the memory
    free(ptr);

    return EXIT_SUCCESS;
}