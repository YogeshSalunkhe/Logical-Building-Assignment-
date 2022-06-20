//Compiler version gcc  6.3.0
#include <stdio.h>

void pattern(iNo)
{
  int i;
  if(iNo < 0)
  {
    iNo = 0 - iNo;
  }
  for(i = 1;i <= iNo;i++)
  {
    printf(" * ");
    
     if(i == iNo)
     {
        for(i = 1;i <= iNo;i++)
        {
            printf(" # ");
        }
     }
  }
}
int main()
{
  int iValue = 0;
  
  printf("\n\t Enter A Value => ");
  scanf("%d",&iValue);
  
  pattern(iValue);
  
  return 0;
}