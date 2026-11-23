/* Accept number of rows and number of columns from user and display bleow pattern .
Input: iRow = 4     iCol = 4
Output: 1 2 3 4 
          2 3 4 
            3 4
              4
*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
  int i = 0, j = 0;
  int iCnt = 0;

  for(i = 1; i <= iRow; i++)
  {
    for(j = 1; j <= iCol; j++)
    {
      if((i == j) || (j > i))
      {
        printf("%d\t",j);
        iCnt++;
      } 
      else
      {
        printf(" \t");
      }
    }
    printf("\n");
  }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns :\n");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}