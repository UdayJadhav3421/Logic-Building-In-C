#include<stdio.h>
#include<conio.h>

void RangeDisplay(int Start,int End)
{
    if(Start > End)
    {
        printf("\n Invalid Range.");
    }
    else
    {
        while(Start <= End)
        {
            printf("  %d",Start);
            Start++;
        }
    }
}
int main()
{
    int Value1, Value2;

    printf("\n Enter Starting Point => ");
    scanf("%d",&Value1);

    printf("\n Enter Ending Point => ");
    scanf("%d",&Value2);

    RangeDisplay(Value1,Value2);

    getch();
    return 0;
}
