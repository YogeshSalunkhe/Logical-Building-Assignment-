//Compiler version gcc  6.3.0
#include <stdio.h>
#include <conio.h>

void Displaydigit(int No)
{
  int Dig = 0;
  
  if(No < 0)
  {
    No = -No;
  }
  while(No > 0)
  {
    Dig = No % 10;
    
    printf("\n %d ",Dig);
    
    No /= 10;
  }
}

int main()
{
  int iValue = 0;
  
  printf("\n\t Enter Number => ");
  scanf("%d",&iValue);
  
  Displaydigit(iValue);
  
  return 0;
}