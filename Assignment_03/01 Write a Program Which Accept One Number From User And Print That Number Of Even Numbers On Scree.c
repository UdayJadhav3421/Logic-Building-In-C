#include<stdio.h>
#include<conio.h>

void PrintEven(int No)
{
    int i = 0, j = 2;

    if(No <= 0)
    {
        return;
    }

    for(i = 1; i <= No; i++)
    {
        if(j % 2 == 0)
        {
            printf("  %d",j);
            j++;
            j++;
        }
    }
}

int main()
{
    int Value = 0;

    printf("\n Enter Number =>");
    scanf("%d",&Value);

    PrintEven(Value);

    getch();
    return 0;
}
