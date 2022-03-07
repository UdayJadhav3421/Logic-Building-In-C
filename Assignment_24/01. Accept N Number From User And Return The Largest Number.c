
#include<stdio.h>
#include<conio.h>

#define True 1
#define False 0

typedef int BOOL;

int Maximum(int Arr[],int Length)
{
    int i = 0, Max = 0;

    for(i = 0; i < Length; i++)
    {
        if(i == 0 || Arr[i] > Max)
        {
            Max = Arr[i];
        }
    }
    return Max;
}
int main()
{
    int Size = 0, Cnt = 0, Value = 0;
    int *p = NULL;

    printf("\n Enter Number Of Elements => ");
    scanf("%d",&Size);

    p = (int *)malloc(Size * sizeof(int));

    if(p == NULL)
    {
        printf("Unable To Allocate Memory");
        return -1;
    }

    printf("\n Enter %d Elements",Size);

    for(Cnt = 0; Cnt < Size; Cnt++)
    {
        printf("\n Enter Element: %d => ",Cnt + 1);
        scanf("%d",&p[Cnt]);
    }

    printf("\n Largest Number is => %d",Maximum(p,Size));

    free(p);

    getch();
    return 0;
}
