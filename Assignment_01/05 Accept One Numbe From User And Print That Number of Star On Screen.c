#include<stdio.h>
#include<conio.h>

void Accept (int No)
{
    int Cnt = 0;

    for(Cnt = 0; Cnt < No; Cnt++)
    {
        printf("\n * ");
    }
}

int main()
{
    int Value = 5;

    Accept(Value);

    getch();
    return 0;
}
