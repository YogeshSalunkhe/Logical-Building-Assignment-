//Compiler version gcc  6.3.0
#include <stdio.h>

void Pattern(int iRow,int iCol)
{
  int i =0,j = 0;
  
  for(i = 1;i <= iRow;i++)
  {
    for(j = 1;j <= iCol;j++)
    {
       if(j % 2 != 0)
       {
         printf(" * ");
       }
       else
       {
         printf(" # ");
       }
    }
    printf("\n");
  }
}

int main()
{
  int iValue1 = 0,iValue2 = 0;
  
  printf("\n\t Enter Rows and Columns => ");
  scanf("%d%d",&iValue1,&iValue2);
  
  Pattern(iValue1,iValue2);
  
  return 0;
}