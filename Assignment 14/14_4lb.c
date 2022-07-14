//Compiler version gcc  6.3.0
#include <stdio.h>
#include <conio.h>

void Pattern(int Size)
{
  int ch = 1;
  
  while(ch <= Size)
  {
    printf(" # %d * ",ch);
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