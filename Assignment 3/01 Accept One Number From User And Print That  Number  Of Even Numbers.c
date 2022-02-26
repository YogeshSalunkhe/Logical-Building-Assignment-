//Compiler version gcc  6.3.0
#include <stdio.h>

void Print_even(int Ino)
{
  int eno=2,cnt=0;
   if(Ino <= 0)
   {
     return;
   }
   cnt=1;
   while(cnt<=Ino)
   {
     printf(" %d ",eno);
     eno++;
     eno++;
     
     cnt++;
   }
}
int main()
{
  int Ivalue=0;
  printf("\n\t Enter Number => ");
  scanf("%d",&Ivalue);
  
  Print_even(Ivalue);
  
  return 0;
}
