#include<stdio.h>
#include<conio.h>

void DisplayFactor(int No)
{
    int i = 0;

    if(No < 0)
    {
        No = -No;
        i = No / 2;
    }

    for(i = 1; i <= No; i++)
    {
        if(i % 2 == 0 && No % i == 0)
        {
            printf("\n%d",i);
        }
    }
}

int main()
{
    int Value = 0;

    printf("\n Enter Number =>");
    scanf("%d",&Value);

    DisplayFactor(Value);

    getch();
    return 0;
}
