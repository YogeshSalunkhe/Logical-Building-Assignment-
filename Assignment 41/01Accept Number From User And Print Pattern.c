//Compiler version gcc  6.3.0
#include <stdio.h>
#include <conio.h>

void Getpattern(int No)
{
  int i = 0,Rev = 1,Cnt = 0;
  
  while(No > 0)
  {
    Rev = Rev * 10 + No % 10;
    Cnt++;
    No /= 10;
  }
  
  for(i = 1;i <= Cnt;i++)
  {
    for(No = 1;No <= Rev % 10;No++)
    {
      printf(" * ");
    }
    Rev /= 10;
    printf("\n");
  }
}

int main()
{
  int iNo = 0;
  
  printf("\n\t Enter A Number => ");
  scanf("%d",&iNo);
  
  Getpattern(iNo);
  
  return 0;
}
