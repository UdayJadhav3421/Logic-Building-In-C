#include<stdio.h>
#include<conio.h>

void Pattern(int No)
{

    if(No > 0)
    {
        while(No != 0)
        {
            printf("$  *  ");
            No--;
        }
    }
    else
    {
        while(No != 0)
        {
            printf("$  *  ");
            No++;
        }

    }
}
int main()
{
    int Value = 0;

    printf("\n Enter a Number => ");
    scanf("%d",&Value);

    Pattern(Value);

    getch();
    return 0;
}
