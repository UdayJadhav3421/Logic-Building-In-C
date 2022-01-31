#include<stdio.h>
#include<conio.h>

int RangeSum(int Num1, int Num2)
{
    int Sum = 0;

    if(Num1 > Num2)
    {
        printf("\n Invalid Range.");
    }
    Up:
        if(Num1 <= Num2)
        {
            Sum = Sum + Num1;

            Num1++;

            goto Up;
        }
        return Sum;
}
int main()
{
    int Value1, Value2;

    printf("\n Enter 1st Number => ");
    scanf("%d",&Value1);

    printf("\n Enter 2nd Number =>");
    scanf("%d",&Value2);

    printf("\n Addition Of Given Number is = %d",RangeSum(Value1,Value2));

    getch();
    return 0;
}
