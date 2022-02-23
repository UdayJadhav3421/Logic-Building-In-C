#include<stdio.h>
#include<conio.h>

int Frequency(int Arr[], int Length)
{
    int i = 0, ECnt = 0, OCnt = 0;

    for(i = 0; i < Length; i++)
    {
        if(Arr[i]%2 == 0)
        {
            ECnt++;
        }
        else
        {
            OCnt++;
        }
    }
    return ECnt - OCnt;
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

            printf("\n\t Result is %d ",Frequency(P,Size));

            free(P);

            getch();
            return 0;
}
