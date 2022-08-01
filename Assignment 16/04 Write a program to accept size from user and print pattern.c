//Compiler version gcc  6.3.0
#include <stdio.h>

void Pattern(int iRow,int iCol)
{
  int i =0,j = 0,ch = iRow;
  
  for(i = 1;i <= iRow;i++)
  {
    for(j = 1;j <= iCol;j++)
    {
      
         printf(" %d ",ch);   
      
    }
    printf("\n");
    ch--;
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
