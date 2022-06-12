//Compiler version gcc  6.3.0
#include <stdio.h>

void Number(iNo)
{
  if(iNo < 50)
  {
    printf("\n\t Small !!!");
  }
  else if(iNo > 50 && iNo < 100)
  {
    printf("\n\t Medium !!!");
  }
  else if(iNo > 100)
  {
    printf("\n\t large !!!");
  }
}
int main()
{
  int iValue = 0;
  
  printf("\n\t Enter A Value => ");
  scanf("%d",&iValue);
  
  Number(iValue);
  
  return 0;
}
