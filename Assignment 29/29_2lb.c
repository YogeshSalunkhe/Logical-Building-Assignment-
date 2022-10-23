//Compiler version gcc  6.3.0
#include <stdio.h>

int ChkFrequency(char *Str,char ch)
{
    int Cnt = 0;
    
    while(*Str != '\0')
    {
        if(*Str == ch)
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
  char Cvalue = '\0';
  int iret = 0;
  
  printf("\n\t Enter A string => ");
  scanf("%[^\n]",&Arr);
 
  printf("\n\t Enter A Character => ");
  scanf(" %c",&Cvalue);
 
  iret = ChkFrequency(Arr,Cvalue);
  
  printf("\n\t Frequency => %d",iret);
  
  return 0;
}