//Compiler version gcc  6.3.0
#include <stdio.h>

void Range(int Arr[],int Cnt,int Start,int End)
{
  int i = 0;
  
  for(i = 0; i < Cnt;i++)
  {
    if(Arr[i] >= Start && Arr[i] <= End)
    {
      printf("\t %d",Arr[i]);
    }
   
  }
  
}

int main()
{
  int iSize = 0,iCnt = 0,iValue1 = 0,iValue2 = 0;
  int *P = NULL;
 
  
  printf("\n\t Enter Number Of Element => ");
  scanf("%d",&iSize);
  
  printf("\n\t Enter Starting Point Number => ");
  scanf("%d",&iValue1);
  
  printf("\n\t Enter Ending Point Number => ");
  scanf("%d",&iValue2);
  
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
  
   Range(P,iSize,iValue1,iValue2);
  
  
  free(P);
  
  return 0;
}