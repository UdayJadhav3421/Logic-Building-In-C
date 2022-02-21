#include<stdio.h>
#include<conio.h>

void Display(int Arr[],int Length)
{
    int i = 0;

    for(i = 0; i < Length; i++)
    {
        if(Arr[i]%2 == 0 && Arr[i]%5 == 0)
        {
            printf("\n %d ",Arr[i]);
        }
    }


}
int main()
{
    int size = 0, Ret = 0, Cnt = 0;
    int *p = NULL;

    printf("Enter Number Of Elements => ");
    scanf("%d",&size);

    p = (int*)malloc(size *sizeof(int));

    if(p == NULL)
    {
        printf("Unable to Allocate Memory");
        return -1;
    }

    printf("Enter %d Elements",size);

    for(Cnt = 0; Cnt < size; Cnt++)
    {
        printf("Enter Element:%d = ",Cnt + 1);
        scanf("%d",&p[Cnt]);
    }
    Display(p, size);

    free(p);
    return 0;


}
