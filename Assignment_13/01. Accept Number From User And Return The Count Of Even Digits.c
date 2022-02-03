#include<stdio.h>
#include<conio.h>

int Cnt_Even_Digit(int No)
{
    int Cnt , i;

    while(No != 0)
    {
        i = No % 10;
        if((i % 2) == 0)
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
    scanf("%d",&Value);

    printf("\n %d",Cnt_Even_Digit(Value));

    getch();
    return 0;
}
