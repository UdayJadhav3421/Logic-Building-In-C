#include<stdio.h>
#include<conio.h>

#define Square 0.0929

double SquareMeter(float No)
{
     return No * Square;
}
int main()
{
    float Value = 0;

    printf("\n Enter Area In Square Feet => ");
    scanf("%f",&Value);

    printf("\n The Square Feet Convert To Square Meter Is => %f",SquareMeter(Value));

    getch();
    return 0;
}
