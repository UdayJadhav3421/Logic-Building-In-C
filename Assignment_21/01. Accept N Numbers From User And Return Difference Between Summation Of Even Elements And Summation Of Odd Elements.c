#include<stdio.h>
#include<conio.h>

int Difference(int Arr[],int Length)
{
    int i = 0, Esum = 0, Osum = 0;

    for(i = 0;i < Length;i++)
    {
        if(Arr[i]%2 == 0)
        {
            Esum = Esum + Arr[i];
        }
        else
        {
            Osum = Osum + Arr[i];
        }
    }
    return Esum - Osum;
}
int main()
{
    int size = 0, Ret = 0, Cnt = 0;
    int *p = NULL;

    printf("\n Enter a Number Of Element => ");
    scanf("%d",&size);

    p = (int*)malloc(size*sizeof(int));

    if(p == NULL)
    {
        printf("Unable to Allocate Memory");
        return -1;
    }
    printf("Enter %d Element => \n",size);

    for(Cnt = 0; Cnt < size; Cnt++)
    {
        printf("Enter Element : %d = ",Cnt+1);
        scanf("%d",&p[Cnt]);
    }
    Ret = Difference(p,size);

    printf("Result is = %d",Ret);

    free(p);

    return 0;
}
