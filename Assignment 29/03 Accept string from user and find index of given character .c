//Compiler version gcc  6.3.0
#include <stdio.h>

int FirstChar(char *Str,char ch)
{
    int i = 0;
    
    while(Str[i] != '\0')
    {
        if(Str[i] == ch)
        {  
            return i;
        }
       i++;
    }
    
      return -1; 
    
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
 
  iret = FirstChar(Arr,Cvalue);
  
  printf("\n\t index => %d",iret);
  
  return 0;
}
