#include<stdio.h>
#include<conio.h>

typedef int BOOL;
#define True 1
#define False 0

int Check (int No)
{
    if((No % 5) == 0)
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

    printf("\n Enter Number = ");
    scanf("%d",&Value);

    bRet = Check(Value);

    if(bRet == True)
    {
        printf("\n Divisible by 5");
    }
    else
    {
        printf("\n Not Divisible By 5");
    }
    getch();
    return 0;
}


