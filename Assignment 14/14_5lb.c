//Compiler version gcc  6.3.0
#include <stdio.h>
#include <conio.h>

void Pattern(int Size)
{
  int I = 1;
  
  for(I = 1;Size > 0;I++)
  {
    if(I % 2 == 0)
    {
      printf(" %d ",I);
      Size--;
    }
  }
}

int main()
{
  int iValue = 0;
  
  printf("\n\t Enter Number of elements => ");
  scanf("%d",&iValue);
  
  Pattern(iValue);
  
  return 0;
}