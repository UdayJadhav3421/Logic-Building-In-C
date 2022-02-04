#include<stdio.h>
#include<conio.h>

int Cnt_Range(int No)
{
    int Cnt = 0, i = 0;

    while(No != 0)
    {
        i = No % 10;

        if((i > 3)&&(i < 7))
        {
            Cnt++;
        }
        No = No / 10;
    }

    return Cnt;

}
int main()
{
    int Value = 0;

    printf("\n Enter a Number => ");
    scanf("%d",&Value);

    printf("\n %d",Cnt_Range(Value));

    getch();
    return 0;
}
