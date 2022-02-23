#include<stdio.h>
#include<conio.h>

int Frequency(int Arr[], int Length)
{
    int i = 0,Count = 0;

    for(i = 0; i< Length; i++)
    {
        if(Arr[i] == 11)
        {
            Count++;
        }
    }
    return Count;
}
int main()
{
    int Size = 0, Cnt = 0;
    int *p = NULL;

    printf("\n Enter Number Of Elements => ");
    scanf("%d",&Size);

    p = (int*)malloc(Size * sizeof(int));

    if(p == NULL)
    {
        printf("Unable To Allocate Memory");
        return -1;
    }

    printf("\n\t Enter %d Elements",Size);

    for(Cnt = 0; Cnt < Size; Cnt++)
    {
        printf("\n\t Enter Element: %d =>",Cnt + 1);
        scanf("%d",&p[Cnt]);
    }

    printf("\n The Return Frequency is => %d",Frequency(p,Size));

    free(p);

    getch();
    return 0;
}
