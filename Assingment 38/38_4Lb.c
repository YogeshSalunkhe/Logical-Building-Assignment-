//Compiler version gcc  6.3.0
#include <stdio.h>

void Pattern(char *Str)
{
     int R = 0,C = 0,N = 0;
     char *P = NULL;
     
     for(N = 0;*Str != '\0';N++,*Str++)
     {
         if(*Str >= 'a' && *Str <= 'z')
         {
              *Str -= 32;
         }
     }
     
     
     R = N;
     
     *Str--;
    
     for(N = 1;N <= R;*Str--,N++);
    
     for(R = 1 ;R <= N;R++)
     {
         P = Str;
         
        for(C = 1;C <= N;C++,*P++)
        {
              printf("%3c",*P);
        }
        
        printf("\n");
     }
     
     
     
}

int main()
{
  char src[20]="";
  
  printf("\n\t Enter String => ");
  gets(src);
  
  Pattern(src);
  
  return 0;
}