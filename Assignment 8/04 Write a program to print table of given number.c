//Compiler version gcc  6.3.0
#include <stdio.h>

void Table(int iNo)
{
  int i;
  
  if(iNo < 0)
  {
    iNo = 0 - iNo;
  }
  for(i = 1;i <= 10;i++)
  {
    printf(" %d ",i * iNo);
  }
}
int main()
{
  int iValue = 0;
  
  printf("\n\t Enter A Value => ");
  scanf("%d",&iValue);
  
  Table(iValue);
  
  return 0;
}
