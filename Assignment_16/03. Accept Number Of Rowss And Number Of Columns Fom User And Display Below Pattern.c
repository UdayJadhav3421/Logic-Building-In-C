#include<stdio.h>
#include<conio.h>

void Pattern(int Row,int Col)
{
    int i = 0, j = 0;
    char ch = '\0';

    for(ch = 'A' ,i = 1; i <= Row; i++,ch++)
    {
        for(j = 1; j <= Col; j++)
        {
            printf(" %c ",ch);
        }
        printf("\n");
    }

}
int main()
{
    int Value1, Value2;

    printf("\n Enter a Row Number => ");
    scanf("%d",&Value1);

    printf("\n Enter a Column Number => ");
    scanf("%d",&Value2);

    Pattern(Value1,Value2);

    getch();
    return 0;
}
