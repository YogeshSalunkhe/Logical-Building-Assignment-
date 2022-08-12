//Compiler version gcc  6.3.0
#include <stdio.h>

void DisplaySum(int Arr[],int Cnt)
{
  int i = 0,D_Sum = 0,Temp = 0;
  
  for(i = 0;i < Cnt;i++)
  {
    D_Sum = 0;
    Temp = Arr[i];
    
    while(Arr[i] > 0)
    {
          D_Sum += Arr[i] % 10;
        
        Arr[i] /= 10;
    }
    
    
      printf("\t %d",D_Sum);
    
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
  
  printf("\n\t <<<< Enter %d Elements >>>>\n\n",iSize);
  
  for(iCnt = 0;iCnt < iSize;iCnt++)
  {
    printf("\n\t Enter Element %d => ",iCnt+1);
    scanf("%d",&P[iCnt]);
  }
  
  DisplaySum(P,iSize);
  
  
  free(P);
  
  return 0;
}