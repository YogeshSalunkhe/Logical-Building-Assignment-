//Compiler version gcc  6.3.0
#include <stdio.h>

int CountSmall(char *Str)
{
    int iCnt = 0;
    
    while(*Str != '\0')
    {
        if(*Str >= 'a' && *Str <= 'z')
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
  
  iRet = CountSmall(Arr);
  
  printf("\n\t Small letters count = %d",iRet);
  
  return 0;
}
