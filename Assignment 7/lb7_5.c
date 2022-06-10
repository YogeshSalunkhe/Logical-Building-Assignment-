//Compiler version gcc  6.3.0
#include <stdio.h>

void DisplayOdd(iNo)
{
  int i = 1;
 
  while(i <= 5)
  {
    
    
      printf(" %d ",i*iNo);
    
    i++;
  }
}
int main()
{
  int iValue = 0;
  
  printf("\n\t Enter A Value => ");
  scanf("%d",&iValue);
  
  DisplayOdd(iValue);
  
  return 0;
}