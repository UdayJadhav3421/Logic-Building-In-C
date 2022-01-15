#include<stdio.h>
#include<conio.h>
int FactDiff(int No)
{
    int i = 0, Fsum = 0, NFsum = 0;

    for(i = 1; i < No; i++)
    {
        if(No % i == 0)
        {
            Fsum += i;
        }
        else
        {
            NFsum += i;
        }
    }
    return Fsum - NFsum;

}
int main()
{
    int Value = 0;

    printf("\n Enter Number => ");
    scanf("%d",&Value);

    printf("\n Difference Between Factors And Non Factors = %d",FactDiff(Value));

    getch();
    return 0;
}
