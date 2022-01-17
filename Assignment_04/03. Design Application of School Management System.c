
#include<stdio.h>
#include<conio.h>

int SchoolFees(int Standard)
{
    if(Standard == 1)
    {
        return 8900;
    }
    else if(Standard == 2)
    {
        return 12790;
    }
    else if(Standard == 3)
    {
        return 21000;
    }
    else
    {
        return 23450;
    }
}

int main()
{
    int std = 0, Fees = 0;

    printf("\n Enter Standard of Student =>");
    scanf("%d",&std);

    if(std >+ 1 && std <= 4)
    {
        Fees = SchoolFees(std);
    }
    else
    {
        printf("\n Enter Valid Standard.");
        return 0;
    }

    printf("\n %d Standard Fees is %d",std,Fees);
    getch();
    return 0;
}
