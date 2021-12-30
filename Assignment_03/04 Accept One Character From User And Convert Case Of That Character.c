#include<stdio.h>
#include<conio.h>

void DisplayConvert(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        printf("\n %c",ch + 32);
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        printf("\n %c",ch - 32);
    }
}
int main()
{
    char cValue ='\0';
    printf("\n Enter Character = ");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}
