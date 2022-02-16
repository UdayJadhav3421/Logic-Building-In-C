#include<stdio.h>
#include<conio.h>

void Pattern(int Row, int Col)
{
    int i = 0, j = 0;

    for(i = 1; i <= Row; i++)
    {
        for(j = 0; j <= Col; j++)
        {
            if(j + i <= Col)
            {
                printf(" * ");
            }
        }
        printf("\n");
    }
}
int main()
{
    int Value1 , Value2;

    printf("\n Enter a Row Number => ");
    scanf("%d",&Value1);

    printf("\n Enter a Column Number => ");
    scanf("%d",&Value2);

    Pattern(Value1,Value2);

    getch();
    return 0;
}
