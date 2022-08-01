//Compiler version gcc  6.3.0
#include <stdio.h>

void Pattern(int R,int C)
{
  int i = 0 ,j = 0,ch = 1;
  
  for(i = 1;i <= R;i++,ch = i)
  {
    for(j = 1;j <= C;j++)
    {
      printf(" %d ",ch);
      ch++;
    }
    printf("\n");
  }
}
int main()
{
  int iValue1 = 0,iValue2 = 0;
  
  printf("\n\t Enter Rows And Columns => ");
  scanf("%d%d",&iValue1,&iValue2);
  
  Pattern(iValue1, iValue2);
  
  return 0;
}
