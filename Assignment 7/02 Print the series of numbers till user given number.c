//Compiler version gcc  6.3.0
#include <stdio.h>

void Display(iNo)
{
  int i;
 
  for(i = 1;i <= iNo;i++)
  {
    printf(" %d ",i);
  }
}
int main()
{
  int iValue = 0;
  
  printf("\n\t Enter A Value => ");
  scanf("%d",&iValue);
  
  Display(iValue);
  
  return 0;
}
