#include<stdio.h>
#include<conio.h>

int LastOcc(int Arr[], int Length, int No)
{
    int i = 0;
    for(i = Length; 0 < i; i--)
    {
        if(Arr[i] == No)
        {
            return i;
        }
    }
   return -1;
}
int main()
{
    int Size = 0,Cnt = 0, bRet = 0,Value = 0;
    int *p = NULL;

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

    printf("\n\t Enter %d Elements => ",Size);

    for(Cnt = 0; Cnt < Size; Cnt++)
    {
        printf("\n\t Enter Element: %d => ",Cnt + 1);
        scanf("%d",&p[Cnt]);
    }
     printf("\n\t The Number Is %d.",LastOcc(p,Size,Value));

     free(p);

     getch();
     return 0;
}
