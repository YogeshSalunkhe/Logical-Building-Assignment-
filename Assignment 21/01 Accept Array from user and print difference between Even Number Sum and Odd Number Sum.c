//Compiler version gcc  6.3.0
#include <stdio.h>

int Difference(int Arr[],int Cnt)
{
  int E_Sum = 0,O_Sum = 0,i = 0;
  
  for(i = 0;i < Cnt; i++)
  {
    if(Arr[i] % 2 == 0)
    {
      E_Sum += Arr[i];
    }
    else
    {
      O_Sum += Arr[i];
    }
  }
  return E_Sum - O_Sum;
}

int main()
{
  int iSize = 0,iRet = 0,iCnt = 0;
  int *P = NULL;
  
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
  
  iRet = Difference(P,iSize);
  
  printf("\n\t Result => %d",iRet);
  
  free(P);
  
  return 0;
}
