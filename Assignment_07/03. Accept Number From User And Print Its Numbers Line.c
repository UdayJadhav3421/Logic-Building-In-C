#include<stdio.h>
#include<conio.h>

void Display(int No)
{
    int i = 0;

    for(i = -No; i <= No; i++)
    {
        printf("  %d",i);
    }
}
int main()
{
    int Value = 0;

    printf("\n Enter a Number => ");
    scanf("%d",&Value);

    Display(Value);

    getch();
    return 0;
}
