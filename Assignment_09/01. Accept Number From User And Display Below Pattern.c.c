#include<stdio.h>
#include<conio.h>

void Display(int No)
{
    int i = 0;

    if(No < 0)
    {
        No = (-No);
    }
    for(i = 1; i <= No; i++)
    {
        if(i == No/2)
        {
            printf(" * ");
        }
        else
        {
            printf(" # ");
        }
    }
}
int main()
{
    int Value = 0;

    printf("\n Enter a Number => ");
    scanf("%d",&Value);

    Display(Value *2);

    getch();
    return 0;
}
