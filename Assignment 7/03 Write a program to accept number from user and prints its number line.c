//Compiler version gcc  6.3.0
#include <stdio.h>

void Display(iNo)
{
  int i;
  
  i = iNo - (iNo * 2);
 
  while(i <= iNo)
  {
    printf(" %d ",i);
    
    i++;
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
