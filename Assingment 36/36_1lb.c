//Compiler version gcc  6.3.0
#include <stdio.h>

void StrNCatX(char *Src,char *Dest,int Cnt)
{
    while(*Src != '\0')
    {
        *Src++;
    }
   
    while(*Dest != '\0' && Cnt != 0 )
    {
         *Src = *Dest;
         *Src++;
         *Dest++;
         Cnt--;
    }
    
    *Dest='\0';
}

int main()
{
  char Arr[50]="Marvellous Infosystem";
  char Brr[30]="Logical Building";
  int iCnt = 0;
  
  printf("\n\t Enter Count Of Characters => ");
  scanf("%d",&iCnt);
  
  StrNCatX(Arr,Brr,iCnt);
  
  printf("\n\t %s",Arr);
  
  return 0;
}