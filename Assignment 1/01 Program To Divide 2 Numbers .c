//Compiler version gcc  6.3.0
#include <stdio.h>
#include <conio.h>

int Divide(int No1,int No2)
{
  int Ans;
  if(No2 > No1)
  {
    printf("\n\t Please Enter Valid Range!!!");
    return -1;
  }
  
  Ans = No1/No2;
  
  return Ans ;
}

int main()
{
  int N1,N2,Ret;
  
  printf("Enter Two Numbers for Dividesion => ");
  scanf("%d%d",&N1,&N2);
  
  Ret = Divide(N1,N2);
  
  printf ("\n\t Division Of Given Numbers Is %d ",Ret);
  return 0;
}
