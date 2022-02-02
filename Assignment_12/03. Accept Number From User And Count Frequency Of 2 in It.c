#include<stdio.h>
#include<conio.h>

int CountTwo(int No)
{
    int i,Num;

    while(No != 0)
    {
        Num = No % 10;

        if(Num == 2)
        {
            i++;
        }

        No = No / 10;
    }
    return i;
}
int main()
{
    int Value = 0;

    printf("\n Enter a Number => ");
    scanf("%d",&Value);

    printf("\n %d",CountTwo(Value));

    getch();
    return 0;
}
