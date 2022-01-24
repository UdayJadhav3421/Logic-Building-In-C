#include<stdio.h>
#include<conio.h>

typedef int BOOL;

#define True 1
#define False 0

BOOL CheckEqual(int No1,int No2)
{
    if(No1 == No2)
    {
        return 1;
    }
}

int main()
{
    int Value1 = 0, Value2 = 0;

    BOOL bRet = False;

    printf("\n Enter a Two Numbers => ");
    scanf("%d%d",&Value1,&Value2);

    bRet = CheckEqual(Value1,Value2);

    if(bRet == 1)
    {
        printf("\n Both Numbers Are Equal.");
    }
    else
    {
        printf("\n Both Numbers Are Not Equal.");
    }

    getch();
    return 0;
}
