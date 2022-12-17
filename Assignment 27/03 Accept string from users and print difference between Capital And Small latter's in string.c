//Compiler version gcc  6.3.0
#include <stdio.h>

int Difference(char *Str)
{
    int S_Cnt = 0,C_Cnt = 0;
    
    while(*Str != '\0')
    {
        if(*Str >= 'a' && *Str <= 'z')
        {
            S_Cnt++;
        }
        else if(*Str >= 'A' && *Str <= 'Z')
        {
            C_Cnt++;
        }
        *Str++;
    }
    return S_Cnt - C_Cnt;
}

int main()
{
  char Arr[20];
  int iRet = 0;
  
  printf("\n\t Enter A String => ");
  scanf("%[^\n]",&Arr);
  
  iRet = Difference(Arr);
  
  printf("\n\t Difference between small & capital letters = %d",iRet);
  
  return 0;
}
