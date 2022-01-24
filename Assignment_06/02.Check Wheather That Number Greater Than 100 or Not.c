#include<stdio.h>
#include<conio.h>

typedef int BOOL;

#define True 1
#define False 0

BOOL CheckGreater(int No)
{
    if(No > 100)
    {
        return True;
    }
    else
    {
        return False;
    }
}

int main()
{
    int Value = 0;

    BOOL bRet = False;

    printf("\n Enter a Number => ");
    scanf("%d",&Value);

    bRet = CheckGreater(Value);

    if(bRet == 1)
    {
        printf("\n Given Number is Greater Than 100.");
    }
    else
    {
        printf("\n Given Number is Less Than 100.");
    }

    getch();
    return 0;
}
