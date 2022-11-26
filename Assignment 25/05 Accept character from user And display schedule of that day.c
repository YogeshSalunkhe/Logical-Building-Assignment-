//Compiler version gcc  6.3.0
#include <stdio.h>

void DisplayScheduel(char Cdiv)
{
    if(Cdiv == 'a' || Cdiv == 'A')
    {
        printf("\n\t At 7 Am");
    }
    else if(Cdiv == 'B' || Cdiv == 'b')
    {
        printf("\n\t 8.30 Am");
    }
    else if(Cdiv == 'C' || Cdiv == 'c')
    {
       printf("\n\t 9.20 Am ");
    }
    else if(Cdiv == 'D' || Cdiv == 'd')
    {
      printf("\n\t 10.30 Am ");
    }
    else
    {
       printf("\n\t Enter valid Division !!!");
    }
}
int main()
{
  char Cvalue ='\0';
  
  printf("\n\t Enter The Character => ");
  scanf("%c",&Cvalue);
  
  DisplayScheduel(Cvalue);
  
  return 0;
}
