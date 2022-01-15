#include<stdio.h>
#include<conio.h>

int SumNonFact(int No)
{
    int i = 0, Sum = 0;
    for(i = 1; i <= No; i++)
    {
        if(No % i != 0)
        {
            Sum += i;
        }
    }
    return Sum;
}

int main()
{
    int Value = 0;

    printf("\n Enter Number => ");
    scanf("%d",&Value);

    printf("\n Summation of Non Factors is = %d",SumNonFact(Value));

    getch();
    return 0;

}
