//Compiler version gcc  6.3.0
#include <stdio.h>
#include <conio.h>

void Pattern(int Size)
{
  int I = 0;
  char ch ='A';
  
  for(I = 1;I <= Size;I++)
  {
    printf(" %c # ",ch);
    ch++;
  }
}

int main()
{
  int iValue = 0;
  
  printf("\n\t Enter Number of elements => ");
  scanf("%d",&iValue);
  
  Pattern(iValue);
  
  return 0;
}
