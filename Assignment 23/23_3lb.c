//Compiler version gcc  6.3.0
#include <stdio.h>

int LastOcc(int Arr[],int Cnt,int No)
{
  int i = 0;
  
  for(i = 0;Cnt > 0;i++,Cnt--)
  {
    if(Arr[Cnt] == No)
    {
      break;
    }
   
  }
  if(i == Cnt)
  {
    return -1;
  }
  else
  {
    return Cnt;
  }
}

int main()
{
  int iSize = 0,iRet = 0,iCnt = 0,iValue = 0;
  int *P = NULL;
 
  
  printf("\n\t Enter Number Of Element => ");
  scanf("%d",&iSize);
  
  printf("\n\t Enter A Number => ");
  scanf("%d",&iValue);
  
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
  
  iRet = LastOcc(P,iSize,iValue);
  
  if(iRet == -1)
  {
    printf("\n\t There is no such number found !!!");
  }
  else 
  {
    printf("\n\t Last Occurrence of number is %d !!!",iRet);
  }
  
  free(P);
  
  return 0;
}