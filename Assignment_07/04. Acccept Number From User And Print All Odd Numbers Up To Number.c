#include<stdio.h>
#include<conio.h>

void OddDisplay(int No)
{
    int i = 0;

    for(i = 1; i <= No; i++)
    {
        if(i % 2 != 0)
        {
            printf("  %d",i);
        }
    }
}
int main()
{
    int Value = 0;

    printf("\n Enter a Number => ");
    scanf("%d",&Value);

    OddDisplay(Value);

    getch();
    return 0;
}
