#include<stdio.h>
#include<conio.h>

void Pattern(int No)
{
    int i = 0;
    char ch = 'A';

    while(i < No)
    {
        printf("  %c",ch);
        ch++;
        i++;
    }

}
int main()
{
    int Value = 0;

    printf("\n Enter a Number => ");
    scanf("%d",&Value);

    Pattern(Value);

    getch();
    return 0;
}
