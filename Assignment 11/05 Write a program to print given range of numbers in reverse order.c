//Compiler version gcc  6.3.0
#include <stdio.h>
#include <conio.h>

void RangeDisplayRev(int Start,int End)
{
  if(Start > End)
  {
    printf("\n\t Invalid Range");
  }
   while(End >= Start)
   {
     printf(" %d ",End);
     
     End--;
   }
   
}

int main()
{
  int iValue1 = 0,iValue2 = 0;
  
  printf("\n\t Enter Starting Point => ");
  scanf("%d",&iValue1);
  
  printf("\n\t Enter Ending Point => ");
  scanf("%d",&iValue2);
  
  RangeDisplayRev(iValue1,iValue2);
  
  return 0;
}
