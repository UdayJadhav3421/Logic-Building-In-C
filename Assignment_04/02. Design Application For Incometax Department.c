#include<stdio.h>
#include<conio.h>

float IncomeTax(int Amount)
{
    if(Amount >= 500000 && Amount < 1000000)
    {
        return((Amount - 499999) / 100) * 10;
    }
    else if(Amount >= 1000000 && Amount < 2000000)
    {
        return(((Amount - 999999) / 100) * 20) + 50000;
    }
    else if(Amount > 2000000)
    {
        return(((Amount - 1999999) / 100) * 30) + 50000 + 2000000;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int Income = 0,Tax = 0;

    printf("\n Enter Income => ");
    scanf("%d",&Income);

    Tax = IncomeTax(Income);

    printf("\n Your Income = %d \n Income Tax = %d",Income,Tax);

    getch();
    return 0;
}
