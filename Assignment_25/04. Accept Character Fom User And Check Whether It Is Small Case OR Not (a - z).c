#include<stdio.h>
#include<conio.h>

#define True 1
#define False 0

typedef int BOOL;

BOOL ChkSmall(char Ch)
{
    if(Ch >= 97 && Ch <= 122)
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

    printf("\n Enter The Character => ");
    scanf("%c",&Value);

    if(ChkSmall(Value))
    {
        printf("\n It Is Small Case Character.");
    }
    else
    {
        printf("\n It Is Not Small Case Character.");
    }

    getch();
    return 0;
}

