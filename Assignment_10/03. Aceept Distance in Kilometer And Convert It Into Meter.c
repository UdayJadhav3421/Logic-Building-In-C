#include<stdio.h>
#include<conio.h>

int KM_To_Meter(int No)
{
    int KM = 1000;

    KM = KM * No;

    return KM;
}
int main()
{
    int Value = 0, Ret = 0;

    printf("\n Enter a Number => ");
    scanf("%d",&Value);

    Ret = KM_To_Meter(Value);

    printf("\n Given Number is Convert To Meter => %d",Ret);

    getch();
    return 0;
}
