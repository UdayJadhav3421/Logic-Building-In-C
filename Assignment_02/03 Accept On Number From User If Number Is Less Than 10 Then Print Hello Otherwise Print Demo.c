#include<stdio.h>
#include<conio.h>

void Display(int No)
{
    if(No < 10)
    {
        printf("\n Hello");
    }
    else
    {
        printf("\n Demo");
    }
}
int main()
{
    int Value = 0;

    printf("\n Enter Number = ");
    scanf("%d",&Value);

    Display(Value);

    return 0;
}
