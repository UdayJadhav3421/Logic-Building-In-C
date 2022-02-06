#include<stdio.h>
#include<conio.h>

void Pattern(int No)
{
    while(No != 0)
    {
        printf(" %d  # ",No);
        No--;
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
