
#include<stdio.h>
#include<conio.h>

#define True 1
#define False 0

typedef int BOOL;

BOOL ChkCapital(char Ch)
{
    if(Ch >= 65 && Ch <= 90)
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
    char Value = '\0';

    printf("\n Enter Character => ");
    scanf("%c",&Value);

    if(ChkCapital(Value))
    {
        printf("\n It Is Capital Character.");
    }
    else
    {
        printf("\n It Is Not Capital Character.");
    }

    getch();
    return 0;
}
