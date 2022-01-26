#include<stdio.h>
#include<conio.h>

void Display(int No)
{
    if(No < 0)
    {
        No = -No;
    }

    switch(No)
    {
    case 0:
        printf("\n Zero");
        break;

    case 1:
        printf("\n One");
        break;

    case 2:
        printf("\n Two");
        break;

    case 3:
        printf("\n Three");
        break;

    case 4:
        printf("\n Four");
        break;

    case 5:
        printf("\n Five");
        break;

    case 6:
        printf("\n Six");
        break;

    case 7:
        printf("\n Saven");
        break;

    case 8:
        printf("\n Eigth");
        break;

    case 9:
        printf("\n Nine");
        break;

    default:
        printf("\n Invalid Number.");
    }
}

int main()
{
    int Value = 0;

    printf("\n Enter a Number => ");
    scanf("%d",&Value);

    Display(Value);

    getch();
    return 0;
}
