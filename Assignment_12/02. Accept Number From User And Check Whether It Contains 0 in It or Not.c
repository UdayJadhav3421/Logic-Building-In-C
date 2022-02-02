#include<stdio.h>
#include<conio.h>

#define True 1
#define False 0

typedef int BOOL;

BOOL CheckZero(int No)
{
   int Num = 0;

   while(No != 0)
   {
       Num = No % 10;

       if(Num == 0)
       {
           return True;
       }

       No = No/10;
   }
   return False;
}
int main()
{
    int Value = 0;
    BOOL bRet = False;

    printf("\n Enter a Number => ");
    scanf("%d",&Value);

    bRet = CheckZero(Value);

    if(bRet == True)
    {
        printf("\n It Contains Zero.");
    }
    else
    {
        printf("\n There Is No Zero.");
    }

    getch();
    return 0;
}
