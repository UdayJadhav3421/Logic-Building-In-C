#include<stdio.h>
#include<conio.h>

void RangeDisplayRev(int Start, int End)
{
    if(Start > End)
    {
        printf("\n Invalid Range.");
    }
    else
    {
        while(End >= Start)
        {
            printf("  %d",End);

            End--;
        }
    }
}

int main()
{
    int Value1,Value2;

    printf("\n Enter a Starting Point => ");
    scanf("%d",&Value1);

    printf("\n Enter a Ending Point => ");
    scanf("%d",&Value2);

    RangeDisplayRev(Value1,Value2);

    getch();
    return 0;
}
