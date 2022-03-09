#include<stdio.h>
#include<conio.h>

#define True 1
#define False 0

typedef int BOOL;

BOOL ChekAlpha(char Ch)
{
    if((Ch >= 65 && Ch <= 90) || (Ch >= 97 && Ch <= 122))
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


    if(ChekAlpha(Value))
    {
        printf("\n It Is Character.");
    }
    else
    {
        printf("\n It Is Not Character");
    }

    getch();
    return 0;
}

