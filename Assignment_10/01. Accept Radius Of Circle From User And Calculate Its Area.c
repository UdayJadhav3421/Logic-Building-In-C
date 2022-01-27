#include<stdio.h>
#include<conio.h>

#define Pi 3.14

double Area_OF_Circle(float Radius)
{
    float Area = 0;

    Area = Pi * Radius * Radius;

    return Area;

}
int main()
{
    float Value = 0;
    double Ret = 0;

    printf("\n Enter a Radius => ");
    scanf("%f",&Value);

    Ret = Area_OF_Circle(Value);

    printf("\n The Area Of Circle => %0.4f",Ret);

    getch();
    return 0;

}
