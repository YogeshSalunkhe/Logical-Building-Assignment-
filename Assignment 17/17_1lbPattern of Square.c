//Compiler version gcc  6.3.0
#include <stdio.h>

void Pattern(int iCol,int iRow)
{
  int i,j,No = 1;
  
  for(i = 1;i <= iRow;i++)
  {
    for(j = 1;j <= iCol;j++)
    {
      printf(" %d ",No);
      No++;
      if(No > 9)
      {
        No = 1;
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