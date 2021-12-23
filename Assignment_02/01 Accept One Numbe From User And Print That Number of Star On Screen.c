#include<stdio.h>
#include<conio.h>

void Display(int No)
{
    int Cnt = 0;
    while(Cnt < No)
    {
        printf("\n * ");
        Cnt++;
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
