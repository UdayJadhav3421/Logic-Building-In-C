#include<stdio.h>
#include<conio.h>

void Display(int Arr[],int Length)
{
    int i = 0;

    for(i = 0; i < Length; i++)
    {
        if(Arr[i]%11 == 0)
        {
            printf(" %d ",Arr[i]);
        }
    }
}
int main()
{
    int size = 0, Ret = 0, Cnt = 0;
    int *p = NULL;

    printf("\n Enter Number Of Elements => ");
    scanf("%d",&size);

    p = (int*)malloc(size * sizeof(int));

    if(p == NULL)
    {
        printf("\n Unable to Allocate Memory => ");
        return -1;
    }

    printf("\n Enter %d Elements",size);

    for(Cnt=0; Cnt < size; Cnt++)
    {
        printf("\n Enter Element:%d=>",Cnt+1);
        scanf("%d",&p[Cnt]);
    }

    Display(p,size);

    free(p);

    getch();
    return 0;
}
