#include<stdio.h>
#include<conio.h>

int EvenFact(int No)
{
    int i = 0, Fact = 1;

    if(No < 0)
    {
        No = (-No);
    }
    for(i = 1; i <= No; i++)
    {
        if(i % 2 == 0)
        {
            Fact = Fact * i;
        }
    }
    return Fact;
}
int main()
{
    int Value = 0;

    printf("\n Enter a Number => ");
    scanf("%d",&Value);

    printf("\n Even Factorial Number Is => %d",EvenFact(Value));

    getch();
    return 0;
}
