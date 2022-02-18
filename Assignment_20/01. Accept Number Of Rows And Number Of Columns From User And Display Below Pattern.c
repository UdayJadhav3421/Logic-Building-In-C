#include<stdio.h>
#include<conio.h>

void Pateern(int Row, int Col)
{
    int i = 0, j = 0;

    for(i = 1; i <= Row; i++)
    {
        for(j = 1; j <= Col; j++)
        {
            if(i + j == Col + 1)
            {
                printf(" # ");
            }
            else
            {
                printf(" * ");
            }
        }
        printf("\n");
    }
}
int main()
{
    int Value1,Value2;

    printf("\n Enter a Row Number => ");
    scanf("%d",&Value1);

    printf("\n Enter a Column Number => ");
    scanf("%d",&Value2);

    Pateern(Value1,Value2);

    getch();
    return 0;
}
