#include<stdio.h>
#include<conio.h>

int Multiply(int No1,int No2,int No3)
{
    int Mult = 0;

    if(No1 != 0 || No2 != 0 || No3 != 0)
    {
        if(No1 == 0)
        {
            No1 = 1;
        }
        if(No2 == 0)
        {
            No2 = 1;
        }
        if(No3 == 0)
        {
            No3 = 1;
        }
        Mult = No1 * No2 * No3;
    }
    return Mult;
}
int main()
{
    int Value1,Value2,Value3,Ret;

    printf("\n Enter a Tree Numbers => ");
    scanf("%d%d%d",&Value1,&Value2,&Value3);

    Ret = Multiply(Value1,Value2,Value3);

    printf("\n Both Numbers Are Multiplication => %d.",Ret);

    getch();
    return 0;
}
