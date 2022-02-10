//Compiler version gcc  6.3.0
#include <stdio.h>

void Display(int Ino,int Frecuncy)
{
   int cnt;
   
   for(cnt=1;cnt<=Frecuncy;cnt++)
   {
     printf(" %d ",Ino);
   }
}
int main()
{
  int Ivalue=0,Icnt=0;
  printf("\n\t Enter Number => ");
  scanf("%d",&Ivalue);
  
  printf("\n\t Enter Count => ");
  scanf("%d",&Icnt);
  
  Display(Ivalue,Icnt);
  
  return 0;
}