//Compiler version gcc  6.3.0
#include <stdio.h>

void Pattern(int iCol,int iRow)
{
  int i,j,No = 1;
  
  for(i = 1;i <= iRow;i++,No =1)
  {
    for(j = 1;j <= iCol;j++)
    {
      if(i % 2 != 0)
      {
        No = 2;
        printf(" %d ",No*j);
       
      }
      else
      {
        printf(" %d ",No);
        No = No + 2;
       
      }
    }
    printf("\n");
              
  }

}
int main()
{
  int R,C;
  
  printf("\n\t Enter Row and column => ");
  scanf("%d%d",&R,&C);
  
  Pattern(R,C);
  
  return 0;
}
