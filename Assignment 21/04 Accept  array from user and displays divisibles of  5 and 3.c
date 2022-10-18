//Compiler version gcc  6.3.0
#include <stdio.h>

void Difference(int Arr[],int Cnt)
{
  int i = 0;
  
  printf("\n\n");
  
  for(i = 0;i < Cnt; i++)
  {
    if(Arr[i] % 5 == 0 && Arr[i] % 3 == 0)
    {
      printf("\t %d",Arr[i]);
    }
   
  }
 
}

int main()
{
  int iSize = 0,iCnt = 0;
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
  
   Difference(P,iSize);
  
  free(P);
  
  return 0;
}
