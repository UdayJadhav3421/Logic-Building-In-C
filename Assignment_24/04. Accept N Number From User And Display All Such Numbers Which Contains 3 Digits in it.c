

#include<stdio.h>
#include<conio.h>

void Digits(int Arr[],int Length)
{
    int i = 0;

    printf("\n\n The 3 Digits Numbers is :- ");

    for(i = 0; i < Length; i++)
    {
        if(Arr[i] > 99 && Arr[i] < 1000)
        {
            printf("\t %d ",Arr[i]);
        }
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

    Digits(p,Num);

    free(p);

    getch();
    return 0;
}
