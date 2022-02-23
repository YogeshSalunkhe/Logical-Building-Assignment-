//Compiler version gcc  6.3.0
#include <stdio.h>
#include <conio.h>

#define True 1
#define False 0

typedef int BOOL;

BOOL cheack_even(int Ino)
{
  if(Ino % 2==0)
  {
    return True;
  }
  else 
  {
    return False;
  }
}

int main()
{
  int Ivalue=0,bret = 0;
  
  printf("\n\t Enter Number => ");
  scanf("%d",&Ivalue);
  
  bret = cheack_even(Ivalue);
  
  if(bret == True)
  {
    printf("\n\t Given Number Is Even.");
  }
  else 
  {
    printf("\n\t Given Number is Odd.");
  }
 
  getch();
  return 0;
}
