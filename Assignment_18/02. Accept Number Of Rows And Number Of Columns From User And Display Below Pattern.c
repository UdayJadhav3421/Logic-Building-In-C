#include<stdio.h>
#include<conio.h>

void Pattern(int Row , int Col)
{
     int i, j;

     for(i = 0; i < Row; i++)
     {
         for(j = 1; j <= Col; j++)
         {
             if((i + j) <= Col)
             {
                 printf(" * ");
             }
             else
             {
                 printf(" # ");
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
