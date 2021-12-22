#include<stdio.h>
#include<conio.h>

void Display()
{
    int i = 0;
    i = 5;
    while(i >= 1)
    {
        printf("\n\t%d",i);
        i--;
    }
}
int main()
{
    Display();
    getch();
    return 0;
}
