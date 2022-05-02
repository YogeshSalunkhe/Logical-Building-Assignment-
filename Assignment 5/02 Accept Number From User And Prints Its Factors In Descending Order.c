//Compiler version gcc  6.3.0
#include <stdio.h>
#include <conio.h>

void fact(int N)
{
   int i=0,Ret=1;

    for(i = N-1;i > 0;i--)
  {
    if(N % i == 0)
    { 
        printf("\t%d",i);
    }
  }
  
}
int main()
{
  int No = 0,Ret=0;
  
  printf("\n\t Enter A Number => ");
  scanf("%d",&No);
  
  fact(No);
  
  getch();
  return 0;
}
