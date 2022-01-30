#include<stdio.h>
#include<conio.h>

int OddFact(int No)
{
    int Fact = 1;

    if(No < 0)
    {
        No = -No;
    }

    while(No != 0)
    {
        if(No%2 != 0);
        {
            Fact *= No;
        }
        No--;
    }
    return Fact;
}
int main()
{
    int Value = 0;

    printf("\n Enter a Number => ");
    scanf("%d",&Value);

    printf("\n Odd Factorial Number Is => %d",OddFact(Value));

    getch();
    return 0;
}
