//Compiler version gcc  6.3.0
#include <stdio.h>
#include <conio.h>

int Sum_Non_fact(int N)
{
   int i=0,F_Sum = 0,Nf_Sum = 0;

    for(i = 1;i < N;i++)
  {
    if(N % i != 0)
    { 
        F_Sum += i;
    }
    else
    {
      Nf_Sum += i;
    }
  }
  return Nf_Sum - F_Sum;
  
}
int main()
{
  int No = 0,iRet=0;
  
  printf("\n\t Enter A Number => ");
  scanf("%d",&No);
  
 iRet = Sum_Non_fact(No);
 
 printf("\n\t Addition of Non factor = %d",iRet);
  
  getch();
  return 0;
}
