#include<stdio.h>
#include<conio.h>

int MultFact(int No)
{
    int i = 0, Mult = 1;

    for(i = 1; i <= No/2; i++)
    {
        if(No % i == 0)
        {
            Mult = Mult*i;
        }
    }
    return Mult;
}
int main()
{
    int Value = 0;

    printf("\n Enter Number = ");
    scanf("%d",&Value);

    printf("\n Given Number Factors Multiplication is => %d",MultFact(Value));

    getch();
    return 0;
}
