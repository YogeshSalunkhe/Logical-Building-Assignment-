//Compiler version gcc  6.3.0
#include <stdio.h>

void Display(int Ino)
{
   int cnt = 0;
   
   while(cnt < Ino)
   {
     printf (" * ");
     
     cnt++;
   }
}
int main()
{
  int Ivalue=0;
  printf("Enter Number => ");
  scanf("%d",&Ivalue);
  
  Display(Ivalue);
  
  return 0;
}