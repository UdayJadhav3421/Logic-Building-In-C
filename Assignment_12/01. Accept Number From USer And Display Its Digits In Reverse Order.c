#include<stdio.h>
#include<conio.h>

void DisplayDigit(int No)
{
    int Digit = 0;

    if(No < 0)
    {
        No = -No;
    }
    while(No > 0)
    {
        Digit = No % 10;

        printf("\n %d",Digit);

        No = No/10;
    }

}
int main()
{
    int Value = 0;

    printf("\n Enter a Number => ");
    scanf("%d",&Value);

    DisplayDigit(Value);

    getch();
    return 0;
}
