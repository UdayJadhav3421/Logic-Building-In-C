#include<stdio.h>
#include<conio.h>

void Pattern(int Row, int Col)
{
    int i = 0, j = 0;

    for(i = 1; i <= Row; i++)
    {
        for(j = 1; j <= Col; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
}
int main()
{
    int iNo1 = 0, iNo2 = 0;

    printf("\n Enter a Row Number => ");
    scanf("%d",&iNo1);

    printf("\n Enter a Column Number => ");
    scanf("%d",&iNo2);

    Pattern(iNo1,iNo2);

    getch();
    return 0;
}
