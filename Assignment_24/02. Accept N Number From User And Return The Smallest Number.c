

#include<stdio.h>
#include<conio.h>

#define True 1
#define False 0

typedef int BOOL;

int Manimum(int Arr[],int Length)
{
    int i = 0, Min = 0;

    for(i = 0; i < Length; i++)
    {
        if(i == 0 || Arr[i] < Min)
        {
            Min = Arr[i];
        }
    }
    return Min;
}
int main()
{
    int Num = 0, Cnt = 0, Value = 0;
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

    printf("\n Largest Number is => %d",Manimum(p,Num));

    free(p);

    getch();
    return 0;
}
