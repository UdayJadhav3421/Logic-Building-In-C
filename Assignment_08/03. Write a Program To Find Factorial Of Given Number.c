#include<stdio.h>
#include<conio.h>

int Factorial(int No)
{
    int Fact = 1;

    if(No < 0)
    {
        No = (-No);
    }
    while(No > 1)
    {
        Fact = Fact * No;

        No--;
    }
    return Fact;
}
int main()
{
    int Value = 0, bRet = 0;

    printf("\n Enter a Number => ");
    scanf("%d",&Value);

    bRet = Factorial(Value);

    printf("\n Factorial Of Number Is %d ",bRet);

    getch();
    return 0;
}
