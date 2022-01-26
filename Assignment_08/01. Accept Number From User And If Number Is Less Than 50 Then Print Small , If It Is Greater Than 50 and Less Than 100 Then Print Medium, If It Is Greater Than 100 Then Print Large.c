#include<stdio.h>
#include<conio.h>

void Number(int No)
{
    if(No < 50)
    {
        printf("\n %d Number Is Small.",No);
    }
    else if(No > 50 && No <= 100)
    {
        printf("\n %d Number Is Medium.",No);
    }
    else
    {
        printf("\n %d Number Is Large.",No);
    }
}

int main()
{
    int Value = 0;

    printf("\n Enter a Number => ");
    scanf("%d",&Value);

    Number(Value);

    getch();
    return 0;
}
