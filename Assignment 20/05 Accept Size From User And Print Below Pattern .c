//Compiler version gcc  6.3.0
#include <stdio.h>

void Pattern(int iCol,int iRow)
{
  int i,j,Cnt = 1;
  
  for(i = 1;i <= iRow;i++,Cnt = 1)
  {
    for(j = 1;j <= iCol;j++)
    {
      if(i == j || i == 1|| j == 1||i == iRow || j == iCol)
      {
          printf(" %d ",Cnt);
 
      }
      else
      {
        printf("   ");
      }
      Cnt++;
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
