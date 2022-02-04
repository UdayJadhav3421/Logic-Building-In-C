#include<stdio.h>
#include<conio.h>

int Mult_Dig(int No)
{
    int Mult = 1, i = 0;

    while(No != 0)
    {
        i = No % 10;

        if(i > 0)
        {
            Mult = Mult * i;
            i++;
        }
        No = No / 10;
    }
    return Mult;
}
int main()
{
    int Value = 0;

    printf("\n Enter a Number => ");
    scanf("%d",&Value);

    printf("\n %d",Mult_Dig(Value));

    getch();
    return 0;
}
