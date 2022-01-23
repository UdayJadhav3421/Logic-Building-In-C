#include<stdio.h>
#include<conio.h>

float Percentage(float No1,float No2)
{
    float Per = 0.0;

    if(No1 >= No2)
    {
        Per = (No2 / No1) * 100;
    }
    else
    {
        printf("\n Obtain Marks is Greater Than Total Marks.");
    }
    return Per;
}
int main()
{
    int Value1 = 0,Value2 = 0;

    float Ret = 0.0;

    printf("\n Enter a Total Marks => ");
    scanf("%d",&Value1);

    printf("\n Enter a Obtained Marks => ");
    scanf("%d",&Value2);

    Ret = Percentage(Value1,Value2);

    printf("\n Your Percentage is %0.2f",Ret);

    getch();
    return 0;
}
