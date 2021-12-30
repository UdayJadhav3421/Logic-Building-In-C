#include<stdio.h>
#include<conio.h>

#define True 1
#define False 0

int ChkVowal(char ch)
{
    if(ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o'|| ch == 'O' || ch == 'u' || ch == 'U')
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
    char cValue = 0;
    int
    bRet = 0;

    printf("\n Enter Character => ");
    scanf("%c",&cValue);

    bRet = ChkVowal(cValue);

    if(bRet == True)
    {
        printf("\n It is Vowal");
    }
    else
    {
        printf("\n It is Not Vowal");
    }
    getch();
    return 0;
}
