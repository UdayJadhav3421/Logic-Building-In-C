#include<stdio.h>
#include<conio.h>

int Frequency(int Arr[], int Length, int No)
{
    int  i = 0,Count = 0;

    for(i = 0; i < Length; i++)
    {
        if(Arr[i] == No)
        {
            Count++;
        }
    }
    return Count;
}
int main()
{
    int Size = 0, Cnt = 0, Value = 0;
    int *p = NULL;

    printf("\n Enter Number Of Elements => ");
    scanf("%d",&Size);

    printf("\n Enter The Number => ");
    scanf("%d",&Value);

    p = (int*)malloc(Size * sizeof(int));

    if(p == NULL)
    {
        printf("Unable To Allocate Memory");
        return -1;
    }

    printf("\n\t Enter %d Element",Size);

    for(Cnt = 0; Cnt < Size; Cnt++)
    {
        printf("\n\t Enter Element: %d =>",Cnt + 1);
        scanf("%d",&p[Cnt]);
    }

    printf("\n The Frequency Return Value is => %d ",Frequency(p,Size,Value));

    free(p);

    getch();
    return 0;
}
