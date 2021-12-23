
#include<stdio.h>
#include<conio.h>

void Display(int No)
{
    while(No > 0)
    {
        printf("\n * ");
        No--;
    }
}
int main()
{
    int Value = 0;

    printf("\n Enter Number = ");
    scanf("%d",&Value);

    Display(Value);

    getch();
    return 0;
}
