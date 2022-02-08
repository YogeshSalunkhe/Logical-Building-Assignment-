//Compiler version gcc  6.3.0
#include <stdio.h>

void Display(int Ino)
{
   while(Ino > 0)
   {
     printf (" * ");
     
     Ino--;
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