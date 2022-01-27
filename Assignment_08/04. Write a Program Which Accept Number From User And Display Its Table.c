#include<stdio.h>
#include<conio.h>

void Table(int No)
{
    int Cnt = 10;

    if(No < 0)
    {
        No =  (-No);
    }
    for(Cnt = 1; Cnt <= 10; Cnt++)
    {
       printf("\n %d",No * Cnt);
    }
}
int main()
{
    int Value = 0;

    printf("\n Enter a Number => ");
    scanf("%d",&Value);

    Table(Value);

    getch();
    return 0;
}
