//Compiler version gcc  6.3.0
#include <stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Check(int Arr[],int Cnt)
{
  int i = 0;
  
  for(i = 0;i < Cnt; i++)
  {
    if(Arr[i] == 11)
    {
      break;
    }
   
  }
  if(i < Cnt)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

int main()
{
  int iSize = 0,iRet = 0,iCnt = 0;
  int *P = NULL;
  BOOL bRet = FALSE;
  
  printf("\n\t Enter Number Of Element => ");
  scanf("%d",&iSize);
  
  P = (int *)malloc(iSize * sizeof(int));
  
  if(P == NULL)
  {
    printf("\n\t Unable to allocate memory!!!");
    return -1;
  }
  
  printf("\n\t <<<< Enter %d Elements >>>>",iSize);
  
  for(iCnt = 0;iCnt < iSize;iCnt++)
  {
    printf("\n\t Enter Element %d => ",iCnt+1);
    scanf("%d",&P[iCnt]);
  }
  
  bRet = Check(P,iSize);
  
  if(bRet == TRUE)
  {
    printf("\n\t 11 is present !!!");
  }
  else 
  {
    printf("\n\t 11 is Absent !!!");
  }
  
  free(P);
  
  return 0;
}