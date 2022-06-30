#include <stdio.h>
#include <conio.h>
#define Pi 3.14

double CircleArea(float fRedius)
{
       double area =0.0;
       
       area = (Pi * fRedius * fRedius);
       
       return area;
}
int main()
{
    float fValue = 0.0;
    double fRet = 0.0;
    
    printf("\n\t Enter Redius => ");
    scanf("%f",&iValue);
    
    fRet = CircleArea(fValue);
    
    printf("\n\t Area Of Circle => %lf",fRet);
    
    getch();
    return 0;
}