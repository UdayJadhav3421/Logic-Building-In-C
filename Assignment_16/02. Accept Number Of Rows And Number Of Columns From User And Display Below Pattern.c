#include<stdio.h>
#include<conio.h>

void Pattern(int Row,int Col)
{
    int i = 0, j = 0;
    char ch ='/0';

    for(i = 1; i <= Row; i++)
    {
        for(ch = 'A', j = 1; j <= Col; j++, ch++)
        {
            if(i % 2 != 0)
            {
                printf(" %c",ch);
            }
            else
            {
                printf(" %c",ch + 32);
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

    Pattern(Value1,Value2);

    getch();
    return 0;
}
