//Compiler version gcc  6.3.0
#include <stdio.h>
#include <conio.h>

void Getpattern(int No)
{
  int i = 0,j = 1,Cnt = 0,Ino = 0;
 
  Ino = No; 
  No = 1;
  while(Ino > 0)
  {
      No = No*10 + Ino % 10;
      Cnt++;
      Ino /= 10;
  }
  
  for(i = 1;i <= Cnt;i++)
  {
    for(j = 1;j <= No % 10;j++)
    {
        if(j == 1)
        {
            printf("\n\t %d",No%10);
        }
        else
        {
            printf(" # ");
        }
    }
    No /= 10;
    printf("\n");
  }
}

int main()
{
  int iNo = 0;
  
  printf("\n\t Enter A Number => ");
  scanf("%d",&iNo);
  
  Getpattern(iNo);
  
  return 0;
}
