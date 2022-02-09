//Compiler version gcc  6.3.0
#include <stdio.h>

void Display(int Ino)
{
   if(Ino > 10)
   {
     printf("\t Hello");
   }
   else
   {
     printf("\t Demo");
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