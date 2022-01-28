#include<stdio.h>
#include<conio.h>

double Area_OF_Rectangle(float Width, float Height)
{
    float Area = 0.0;

    Area = Width * Height;

    return Area;
}
int main()
{
    float Value1 = 0.0, Value2 = 0.0;
    double Ret = 0.0;

    printf("\n Enter a Width => ");
    scanf("%f",&Value1);

    printf("\n Enter a Height => ");
    scanf("%f",&Value2);

    Ret = Area_OF_Rectangle(Value1,Value2);

    printf("\n The Area Of Rectangle is => %0.4f",Ret);

    getch();
    return 0;
}
