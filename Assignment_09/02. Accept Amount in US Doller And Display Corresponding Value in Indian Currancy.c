#include<stdio.h>
#include<conio.h>

#define Rupees 70

int Doller_To_INR(int No)
{
    return No * Rupees;
}
int main()
{
    int Value = 0;

    printf("\n Enter a Number =>");
    scanf("%d",&Value);

    printf("\n Value In INR is => %d",Doller_To_INR(Value));

    getch();
    return 0;
}
