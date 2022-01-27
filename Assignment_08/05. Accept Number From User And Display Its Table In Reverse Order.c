#include<stdio.h>
#include<conio.h>

void TableRev(int No)
{
    int Cnt = 0;

    if(No < 0)
    {
        No = (-No);
    }
    for(Cnt = 10; Cnt >= 1; Cnt--)
    {
        printf("\n %d",No * Cnt);
    }
}
int main()
{
    int Value = 0;

    printf("\n Enter a Number =>");
    scanf("%d",&Value);

    TableRev(Value);

    getch();
    return 0;
}
