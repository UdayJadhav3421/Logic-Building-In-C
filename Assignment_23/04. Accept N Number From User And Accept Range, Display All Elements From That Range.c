
#include<stdio.h>
#include<conio.h>

void Range(int Arr[],int Length, int Start, int End)
{
    int i = 0,Cnt;
    for(i = 0; i < Length; i++)
    {
        if(Arr[i] > Start && Arr[i] < End)
        {
            printf("\t %d ",Arr[i]);
        }
    }
}
int main()
{
    int Size = 0,Cnt = 0,Value1 = 0, Value2 = 0;
    int *p = NULL;

    printf("\n Enter Number Of Elements => ");
    scanf("%d",&Size);

    printf("\n Enter The Number => ");
    scanf("%d",&Value1);

    printf("\n Enter The Number => ");
    scanf("%d",&Value2);

    p = (int *)malloc(Size * sizeof(int));

    if(p == NULL)
    {
        printf("Unable To Allocate Memory");
        return -1;
    }

    printf("\n\t Enter %d Elements => ",Size);

    for(Cnt = 0; Cnt < Size; Cnt
    ++)
    {
        printf("\n\t Enter Element: %d => ",Cnt + 1);
        scanf("%d",&p[Cnt]);
    }

     Range(p,Size,Value1,Value2);

     free(p);

     getch();
     return 0;
}
