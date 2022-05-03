//Compiler version gcc  6.3.0
#include <stdio.h>
#include <conio.h>

void Non_fact(int N)
{
   int i=0,Ret=1;

    for(i = 1;i < N;i++)
  {
    if(N % i != 0)
    { 
        printf("\t%d ",i);
    }
  }
  
}
int main()
{
  int No = 0,Ret=0;
  
  printf("\n\t Enter A Number => ");
  scanf("%d",&No);
  
  Non_fact(No);
  
  getch();
  return 0;
}
