#include<stdio.h>
#include<conio.h>

int CountEven(int Arr[], int Length)
{
    int i = 0, Cnt = 0;

    for(i = 0; i < Length; i++)
    {
        if(Arr[i] % 2 == 0)
        {
            Cnt++;
        }
    }
    return Cnt;
}
int main()
{
    int Size = 0, Cnt = 0;
    int *P = NULL;

    printf("\n Enter Number Of Elements => ");
    scanf("%d",&Size);

    P = (int*)malloc(Size * sizeof(int));

    if(P == NULL)
    {
        printf("Unable To Allocate Memory");
        return -1;
    }

    printf("\n\t Enter %d Elements",Size);

    for(Cnt = 0; Cnt < Size; Cnt++)
    {
        printf("\n\t Enter Element: %d => ",Cnt+1);
        scanf("%d",&P[Cnt]);
    }
    printf("\n================*********================\n");

    printf("\n\t Result is %d.",CountEven(P,Size));

    printf("\n\n================*********================\n");
    free(P);

    getch();
    return 0;
}
