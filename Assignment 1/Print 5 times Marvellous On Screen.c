//Compiler version gcc  6.3.0
#include <stdio.h>
#include <conio.h>

void display(int S)
{
  int i;
  
  printf("\n\n");
  
  for(i=1;i<=S;i++)
  {
    printf("\t Marvellouse \n");
  }
}
int main()
{
  int x=5;
  display(x);
  
  getch();
  return 0;
}