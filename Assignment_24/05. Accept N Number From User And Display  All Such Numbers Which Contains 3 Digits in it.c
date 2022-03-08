#include<stdio.h>
#include<conio.h>

void DigitSum(int Arr[],int Length)
{
    int i = 0,Sum = 0;

    printf("\n\n Summation of Digit is :- ");

    for(i = 0; i < Length; i++)
    {
        if(Sum != 0)
        {
            Sum = 0;
        }
        while(Arr[i] > 0)
        {
            Sum = Sum + (Arr[i] % 10);
            Arr[i] = Arr[i] / 10;
        }
        printf(" %d ",Sum);
    }

}
int main()
{
    int Num = 0, Cnt = 0;
    int *p = NULL;

    printf("\n Enter Number Of Elements => ");
    scanf("%d",&Num);

    p = (int *)malloc(Num * sizeof(int));

    if(p == NULL)
    {
        printf("Unable To Allocate Memory");
        return -1;
    }

    printf("\n Enter %d Elements",Num);

    for(Cnt = 0; Cnt < Num; Cnt++)
    {
        printf("\n Enter Element: %d => ",Cnt + 1);
        scanf("%d",&p[Cnt]);
    }

    DigitSum(p,Num);

    free(p);

    getch();
    return 0;
}
