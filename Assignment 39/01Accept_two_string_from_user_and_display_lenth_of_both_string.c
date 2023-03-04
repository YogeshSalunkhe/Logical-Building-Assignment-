//Compiler version gcc  6.3.0
#include <stdio.h>

void Strlen(char *Str1,char *Str2)
{
     int cnt = 0;
     
     for(cnt = 0;*Str1 != '\0';*Str1++,cnt++);
     
     printf("\n\t %d",cnt);
     
     for(cnt = 0;*Str2 != '\0';*Str2++,cnt++);
     
     printf("\n\t %d",cnt);
     
}

int main()
{
  char csrc[20]="",src[20]="";
  
  printf("\n\t Enter String => ");
  gets(csrc);
  
  printf("\n\t Enter String => ");
  gets(src);
  
  Strlen(csrc,src);
  
  return 0;
}
