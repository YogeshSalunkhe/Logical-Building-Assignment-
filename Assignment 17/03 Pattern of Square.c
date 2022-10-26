//Compiler version gcc  6.3.0
#include <stdio.h>

void Pattern(int iCol,int iRow)
{
  int i,j;
  char ch = 'a';
  
  for(i = 1;i <= iRow;i++,ch = 'a')
  {
    if(i % 2 == 0)
    {
      ch = '1';
    }
    for(j = 1;j <= iCol;j++)
    {
      if(i % 2 == 0)
      {
        printf("\t %c ",ch);
        ch++;
      }
      else
      {
        printf("\t %c ",ch);
        ch++; 
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
