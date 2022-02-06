#include<stdio.h>
#include<conio.h>

void Pattern(int No)
{
    int i = 0;

    for(i = 1; i <= No; i++)
    {
        printf(" %d  * ",i);
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
