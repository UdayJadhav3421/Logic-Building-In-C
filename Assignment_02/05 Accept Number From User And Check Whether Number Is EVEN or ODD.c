#include<stdio.h>
#include<conio.h>

#define True 1
#define False 0

typedef int BOOL;

BOOL CheckEVEN(int No)
{
    if(No % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int Value = 0;
    BOOL bRet = False;

    printf("\n Enter Number = ");
    scanf("%d",&Value);

    bRet = CheckEVEN(Value);

    if(bRet == True)
    {
        printf("\n The %d Number is Even.",Value);
    }
    else
    {
        printf("\n The %d Number is Odd.",Value);
    }
    getch();
    return 0;
}

