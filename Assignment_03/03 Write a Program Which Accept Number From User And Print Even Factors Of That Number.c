#include<stdio.h>
#include<conio.h>

void DisplayEvenFactor(int No)
{
    int i = 0;

            if(No <= 0)
            {
                No = -No;
            }

            i = No / 2;

            while(i != 0)
            {
                if(i % 2 == 0 && No % i == 0)
                {
                    printf("  %d",i);
                }
                i--;
            }
}

int main()
{
            int Value = 0;

            printf("\n Enter Number =>");
            scanf("%d",&Value);

            DisplayEvenFactor(Value);

            getch();
            return 0;
}
