//Compiler version gcc  6.3.0
#include <stdio.h>

void DisplayOdd(iNo)
{
  int i;
 
  while(i <= iNo)
  {
    if(i % 2 != 0)
    {
      printf(" %d ",i);
    }
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
