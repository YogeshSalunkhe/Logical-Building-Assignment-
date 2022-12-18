//Compiler version gcc  6.3.0
#include <stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckVowel(char Arr[20])
{
    int i = 0;
    
    while(Arr[i] != '\0')
    {
        if(Arr[i] == 'a'||Arr[i] == 'A'||Arr[i] == 'e'||Arr[i]=='E'||Arr[i]=='I'||Arr[i]=='i'||Arr[i]=='O'||Arr[i]=='o'||Arr[i]=='U'||Arr[i]=='u' )
        {  
            return 1;
        }
        i++;
    }
    
  
}

int main()
{  
  char Arr[20] ;
  BOOL bret = FALSE;
  
  printf("\n\t Enter A string => ");
  scanf("%[^\n]",&Arr);
 
 
  bret = CheckVowel(Arr);
  
  if(bret == TRUE)
  {
      printf("\n\t True !!");
  }
  else
  {
      printf("\n\t False");
  }
  
  return 0;
}
