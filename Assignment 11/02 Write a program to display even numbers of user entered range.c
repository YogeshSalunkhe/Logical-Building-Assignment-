//Compiler version gcc  6.3.0
#include <stdio.h>
#include <conio.h>

void DisplayRangeEven(int Start,int End)
{
   while(Start <= End)
   {
     if(Start % 2 == 0)
     {
       printf(" %d ",Start);
     }
     Start++;
   }
}

int main()
{
  int iValue1 = 0,iValue2 = 0;
  
  printf("\n\t Enter Starting Point => ");
  scanf("%d",&iValue1);
  
  printf("\n\t Enter Ending Point => ");
  scanf("%d",&iValue2);
  
  DisplayRangeEven(iValue1,iValue2);
  
  return 0;
}
