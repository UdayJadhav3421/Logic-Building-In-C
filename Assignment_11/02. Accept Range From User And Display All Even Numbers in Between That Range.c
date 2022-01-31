#include<stdio.h>
#include<conio.h>

void EvenRangeDiplay(int SP, int EP)
{
    if(SP > EP)
    {
        printf("\n Invalid Range.");
    }
    else
    {
        while(SP <= EP)
        {
            if(SP % 2 == 0)
            {
                printf(" %d",SP);
            }
            SP++;
        }
    }
}
int main()
{
    int Value1, Value2;

    printf("\n Enter a Starting Point => ");
    scanf("%d",&Value1);

    printf("\n Enter a Ending Point => ");
    scanf("%d",&Value2);

    EvenRangeDiplay(Value1,Value2);

    getch();
    return 0;
}

