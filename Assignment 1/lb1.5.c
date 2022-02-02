//Compiler version gcc  6.3.0
#include <stdio.h>

void Accept(ino)
{
  int cnt = 0;
  
  for(cnt = 1;cnt <= ino;cnt++)
  {
      printf(" * ");
  }
  
}

int main()
{
  int ivalue = 0;
      ivalue = 5;
      
  Accept(ivalue);
 
 return 0;
}
