#include<stdio.h>
#include<conio.h>

int Cnt_Odd_Digit(int No)
{
    int Cnt = 0, i = 0;

    while(No != 0)
    {
        i = No % 10;

        if((i % 2) != 0)
        {
            Cnt++;
        }

        No = No / 10;
    }
    return Cnt;
}
int main()
{
    int Value = 0;

    printf("\n Enter a Number => ");
    scanf("\n %d",&Value);

    printf("\n %d",Cnt_Odd_Digit(Value));

    getch();
    return 0;
}
