#include<stdio.h>
#include<conio.h>

void MultpleDisplay(int No)
{
    int i = 0;

    for(i = 1; i <= 5; i++)
    {
        printf(" %d",i * No);
    }
}
int main()
{
    int Value = 0;

    printf("\n Enter a Number => ");
    scanf("%d",&Value);

    MultpleDisplay(Value);

    getch();
    return 0;
}
