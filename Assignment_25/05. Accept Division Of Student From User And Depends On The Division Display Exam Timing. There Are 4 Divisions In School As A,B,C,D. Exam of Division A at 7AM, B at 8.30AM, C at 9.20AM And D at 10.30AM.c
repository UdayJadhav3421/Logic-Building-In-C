#include<stdio.h>
#include<conio.h>

void DisplaySchedule(char Div)
{
    if(Div == 'A' || Div == 'a')
    {
        printf("\n Your Exam at 7 AM.");
    }
    else if(Div == 'B' || Div == 'b')
    {
        printf("\n Your Exam at 8.30 AM.");
    }
    else if(Div == 'C' || Div == 'c')
    {
        printf("\n Your Exam at 9.20 AM.");
    }
    else if(Div == 'D' || Div == 'd')
    {
        printf("\n Your Exam at 10.30 AM.");
    }
    else
    {
        printf("\n Invalid Character.");
    }
}
int main()
{
    char Value = '\0';

    printf("\n Enter Your Devision => ");
    scanf("%c",&Value);

    DisplaySchedule(Value);

    getch();
    return 0;
}
