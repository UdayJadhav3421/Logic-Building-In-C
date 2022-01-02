
#include<stdio.h>
#include<conio.h>

void CalculateBill(int Bill)
{
    int AMT = 0;

    if(Bill > 500 && Bill < 1500)
    {
        AMT = (Bill * 10)/100;
        printf("\n Your Bill Amount %d of 10%% Discount",Bill - AMT);
    }
    else if(Bill > 1500)
    {
        AMT = (Bill * 15)/100;
        printf("\n Your Bill Amount %d of 15%% Discount",Bill - AMT);
    }
    else
    {
        printf("\n Your Bill Amount of %d",Bill);
    }
    return 0;
}
int main()
{
    int AMT = 0,Bill = 0;

    printf("\n Enter Bill Amount of Coustemer =>");
    scanf("%d",&Bill);

    CalculateBill(Bill);

    getch();
    return 0;
}
