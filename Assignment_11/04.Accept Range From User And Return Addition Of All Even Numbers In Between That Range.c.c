#include<stdio.h>
#include<conio.h>

int RangeSumEven(int SP, int EP)
{
    int Sum = 0;

    if(SP > EP)
    {
        printf("\n Invalid Range.");
    }
    UP:
    while(SP <= EP)
    {
        if(SP % 2 == 0)
        {
            Sum = Sum + SP;
        }
        SP++;
        goto UP;
    }
    return Sum;

}
int main()
{
    int Value1,Value2;

    printf("\n Enter A StartingPoint => ");
    scanf("%d",&Value1);

    printf("\n Enter a Ending Point => ");
    scanf("%d",&Value2);

    printf("\n Addition Of Given Number is => %d",RangeSumEven(Value1,Value2));

    getch();
    return 0;
}
