#include<stdio.h>
#include<conio.h>

#define True 1
#define False 0

typedef int BOOL;

BOOL Check(int Arr[], int Length, int No)
{
    int i = 0;

    for(i = 0; i < Length; i++)
    {
        if(Arr[i] == No)
        {
           return True;
        }
    }
    return False;
}
int main()
{
    int Size = 0,Cnt = 0, Value = 0;
    int *p = NULL;
    BOOL bRet = False;

    printf("\n Enter Number Of Elements => ");
    scanf("%d",&Size);

    printf("\n Enter The Number => ");
    scanf("%d",&Value);

    p = (int *)malloc(Size * sizeof(int));

    if(p == NULL)
    {
        printf("Unable To Allocate Memory");
        return -1;
    }

    printf("Enter %d Elements => ",Size);

    for(Cnt = 0; Cnt < Size; Cnt++)
    {
        printf("\n Enter Element: %d => ",Cnt + 1);
        scanf("%d",&p[Cnt]);
    }
    Check(p, Size,Value);

    if(bRet == True)
    {
        printf("\n\t Number Is Present.");
    }
    else
    {
        printf("\n\t Number Is Not Present.");
    }
     free(p);

      getch();
     return 0;
}
