//Compiler version gcc  6.3.0
#include <stdio.h>

int Countwhite(char *Str)
{
  int Cnt = 0;
  
  while(*Str != '\0' || *Str == ' ')
  {
     if(*Str ==' ' )
     {
          Cnt++;
     }
    
     *Str++;
  }
  return Cnt;
 
}

int main()
{  
  char Arr[20] ;
  int iRet = 0;
  
  printf("\n\t Enter A Character => ");
  scanf("%[^\n]",&Arr);
 
   iRet = Countwhite(Arr);
  
  printf("\n\t %d ",iRet);
  
  return 0;
}