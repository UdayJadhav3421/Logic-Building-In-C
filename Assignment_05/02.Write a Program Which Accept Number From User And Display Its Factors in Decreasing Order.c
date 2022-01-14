#include<stdio.h>
#include<conio.h>

void FactRev(int No)
{
    int i = 0;

    for(i = No/2; i >= 0; i--)
    {
        if(No % i == 0)
           {
               printf("%d",i);
           }
    }
}

int main()
{
    int Value = 0;

    printf("\n Enter Number = ");
    scanf("%d",&Value);

    FactRev(Value);

    getch();
    return 0;
}
