#include<stdio.h>
#include<conio.h>

int FactDiff(int No)
{
    int Efact = 1, Ofact = 1;

    if(No < 0)
    {
        No = -No;
    }
    while(No != 0)
    {
        if(No%2 == 0)
        {
            Efact = Efact * No;
        }
        else
        {
            Ofact = Ofact * No;
        }
        No--;
    }
    return Efact - Ofact;
}

int main()
{
    int Value = 0;

    printf("\n Enter a Number => ");
    scanf("%d",&Value);

    printf("\n Difference BetweenEven And Odd Factorial is => %d",FactDiff(Value));

    getch();
    return 0;
}
