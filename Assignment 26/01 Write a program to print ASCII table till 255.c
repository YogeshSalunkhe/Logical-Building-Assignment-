//Compiler version gcc  6.3.0
#include <stdio.h>

void ASCII()
{
  int No = 0;
  
  while(No < 256)
  {
      printf("\n %3d = %c",No,No);
      No++;
  }
}

int main()
{
  ASCII();
  return 0;
}
