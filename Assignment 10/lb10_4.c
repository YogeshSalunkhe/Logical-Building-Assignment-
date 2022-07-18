#include <stdio.h>
#include <conio.h>


double FhtoCs(float Temp)
{
       double Celsius ;
       
       Celsius = ((Temp - 32) * (5.0/9.0));
       
       return Celsius;
}
int main()
{
    float fValue = 0.0;
    double dRet ;
    
    printf("\n\t Enter Temperature => ");
    scanf("%f",&fValue);
    
     dRet = FhtoCs(fValue);
    
    printf("\n\t Temperature in celsius => %lf",dRet);
    
    getch();
    return 0;
}