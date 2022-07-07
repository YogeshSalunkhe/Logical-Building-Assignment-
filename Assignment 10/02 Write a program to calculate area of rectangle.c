#include <stdio.h>
#include <conio.h>
#define Pi 3.14

double RectArea(float width , float height)
{
       double area =0.0;
       
       area = (width * height);
       
       return area;
}
int main()
{
    float fValue1 = 0.0,fValue2 = 0.0;
    double fRet = 0.0;
    
    printf("\n\t Enter height and width => ");
    scanf("%f%f",&fValue1,&fValue2);
    
    fRet = RectArea(fValue1,fValue2);
    
    printf("\n\t Area Of Rectangle => %0.3lf",fRet);
    
    getch();
    return 0;
}
