#include<stdio.h>
#include<conio.h>

#define True 1
#define False 0

typedef int BOOL;

BOOL Check(int Arr[], int Length)
{
    int i = 0;

    for(i = 0; i < Length; i++)
    {
        if(Arr[i] == 11)
        {
            return True;
        }
    }
    return False;
}
int main()
{
    int size = 0,Cnt = 0;
    int *p = NULL;
    BOOL bRet = False;

    printf("\n Enter Number Of Elements => ");
    scanf("%d",&size);

    p = (int*)malloc(size * sizeof(int));

    if(p == NULL)
    {
        printf("\n Unable To Allocate Memory");
        return -1;
    }

    printf("\n\t Enter %d Elements",size);

    for(Cnt = 0; Cnt < size; Cnt++)
    {
        printf("\n\t Enter Element: %d => ",Cnt+1);
        scanf("%d",&p[Cnt]);
    }

    bRet = Check(p,size);

    if(bRet == True)
    {
        printf("\n\t 11 is Present");
    }
    else
    {
        printf("\n\t 11 is Absent");
    }

    free(p);

    getch();
    return 0;
}
