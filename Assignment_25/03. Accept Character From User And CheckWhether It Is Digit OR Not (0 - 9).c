
#include<stdio.h>
#include<conio.h>

#define True 1
#define False 0

typedef int BOOL;

BOOL ChkDigit(char Dig)
{
    if(Dig >= 48 && Dig <= 57)
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
    char Value='\0';

    printf("\n Enter The Character => ");
    scanf("%c",&Value);

    if(ChkDigit(Value))
    {
        printf("\n It is Digit");
    }
    else
    {
        printf("\n It Is Not Digit.");
    }

    getch();
    return 0;
}
