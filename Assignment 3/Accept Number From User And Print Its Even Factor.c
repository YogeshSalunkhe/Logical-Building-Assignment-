//Compiler version gcc  6.3.0

#include <stdio.h>

void Display_factor(int Ino)
{
  int i;
  
    if(Ino <= 0)
    {
      Ino = -Ino;
    }
    
    for(i = Ino/2 ; i <= Ino ; i--)
    {
      if(Ino % i == 0 && i % 2 == 0)
      {
          
               printf(" %d ",i);
          
      }
     
    }
}

int main()
{
  int Ivalue;
  
  printf("\n\t Enter A Number => ");
  scanf("%d",&Ivalue);
  
  Display_factor(Ivalue);
  
  
  return 0;
}
