
#include<stdio.h>
#include<conio.h>

void NonFact(int No)
{
    int i = 0;
    for(i = 1; i <= No; i++)
    {
        if(No % i != 0)
        {
            printf("%d ",i);
        }
    }
}
int main()
{
    int Value = 0;

    printf("\n Enter Number => ");
    scanf("%d",&Value);

    NonFact(Value);

    getch();
    return 0 ;
}
