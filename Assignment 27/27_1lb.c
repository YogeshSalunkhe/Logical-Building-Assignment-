//Compiler version gcc  6.3.0
#include <stdio.h>

int CountCapital(char *Str)
{
    int iCnt = 0;
    
    while(*Str != '\0')
    {
        if(*Str >= 'A' && *Str <= 'Z')
        {
            iCnt++;
        }
        *Str++;
    }
    return iCnt;
}

int main()
{
  char Arr[20];
  int iRet = 0;
  
  printf("\n\t Enter A String => ");
  scanf("%[^\n]",&Arr);
  
  iRet = CountCapital(Arr);
  
  printf("\n\t Capital letters count = %d",iRet);
  
  return 0;
}