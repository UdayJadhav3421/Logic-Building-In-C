#include<stdio.h>
#include<conio.h>

void Display (int No, int Frequency)
{
    int Cnt = 0;

    for(Cnt = 0; Cnt < Frequency; Cnt++)
    {
        printf("\t%d",No);
    }
}

int main()
{
    int Value = 0, Count = 0;;

    printf("\n Enter 1st Number = ");
    scanf("%d",&Value);

    printf("\n Enter 2nd Number = ");
    scanf("%d",&Count);

    Display(Value,Count);

    getch();
    return 0;
}
