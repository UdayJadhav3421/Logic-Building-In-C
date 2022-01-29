#include<stdio.h>
#include<conio.h>

double Fh_To_Cs(float Temp)
{
    return (Temp - 32) * 5/9;

}
int main()
{
    float Value = 0.0;

    printf("\n Enter Temperature In Fahrenheit => ");
    scanf("%f",&Value);

    printf("\n The Fahrenheit is Convert to Celsius => %0.4f",Fh_To_Cs(Value));

    getch();
    return 0;
}
