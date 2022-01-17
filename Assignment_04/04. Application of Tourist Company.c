#include<stdio.h>
#include<conio.h>

int Tourist(int Km)
{
    int No = 0;

    if(Km < 100)
    {
        return Km * 25;
    }
    else if(Km > 100)
    {
        No = Km - 100;
        return ((No * 15) + (100 * 25));
    }
}

int main()
{
    int Km = 0, rent = 0;

    printf("\n Enter Running Kilometers => ");
    scanf("%d",&Km);

    rent = Tourist(Km);

    printf("\n Rent is => %d",rent);
    getch();
    return 0;
}
