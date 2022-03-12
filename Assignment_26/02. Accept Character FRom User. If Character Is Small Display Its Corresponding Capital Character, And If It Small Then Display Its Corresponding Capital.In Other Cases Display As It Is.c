#include<stdio.h>
#include<conio.h>

void Display(char ch)
{
    if(ch >= 65 && ch <= 90)
    {
        printf("\n %c",ch + 32);
    }
    else if(ch >= 97 && ch <= 122)
    {
        printf("\n %c",ch - 32);
    }
    else
    {
        printf("\n %c",ch);
    }
}
int main()
{
    char Ch = '\0';

    printf("\n Enter The Character => ");
    scanf("%c",&Ch);

    Display(Ch);

    getch();
    return 0;
}
