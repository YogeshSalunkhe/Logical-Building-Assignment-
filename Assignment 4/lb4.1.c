//Compiler version gcc  6.3.0
#include <stdio.h>

float calculate_Bill(int Amt)
{
  int Dis = 0;
  if(Amt <= 500)
  {
    return Amt;
  }  
  else if(Amt > 500 && Amt <= 1500)
  {
    Dis = Amt -((Amt * 10 )/ 100);
  }
  
  else if(Amt > 1500)
  {
    Dis = Amt - ((Amt * 15)/100);
  }
  
  return Dis;
}

int main()
{
  int Amt = 0,Dis = 0;
  
  printf("\n\t Enter A Amount => ");
  scanf("%d",&Amt);
  
  Dis = calculate_Bill(Amt);
   
  printf("\n\t Discount less Amount => %d",Dis);
  
  return 0;
}