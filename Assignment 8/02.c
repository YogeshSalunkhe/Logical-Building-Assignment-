//Compiler version gcc  6.3.0
#include <stdio.h>

void Display(int Num)
{
  if(Num == 0)
  {
    printf("\n\t Zero ");
  }
  else if(Num == 1 || Num == -1)
  {
    printf("\n\t One ");
  }
  else if(Num == 2 || Num == -2)
  {
    printf("\n\t Two ");
  }
  else if(Num == 3 || Num == -3)
  {
    printf("\n\t Three ");
  }
  else if(Num == 4 || Num == -4)
  {
    printf("\n\t Four ");
  }
  else if(Num == 5 || Num == -5)
  {
    printf("\n\t Five ");
  }
   else if(Num == 6 || Num == -6)
  {
    printf("\n\t Six ");
  }
  else if(Num == 7 || Num == -7)
  {
    printf("\n\t Seven ");
  }
  else if(Num == 8 || Num == -8)
  {
    printf("\n\t Eight ");
  }
  else if(Num == 9 || Num == -9)
  {
    printf("\n\t Nine ");
  }
  else
  {
    printf("\n\t Invalid Number!!!");
  }
}
int main()
{
  int iValue = 0;
  
  printf("\n\t Enter A Number => ");
  scanf("%d",&iValue);
  
  Display(iValue);
  
  return 0;
}
