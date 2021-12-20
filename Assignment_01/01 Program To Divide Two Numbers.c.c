#include<stdio.h>

int Divide(int No1,int No2)
{
    int Ans = 0;
    if(No2 > No1)
    {
        return -1;
    }
    Ans = No1/No2;
    return Ans;
}
int main()
{
    int value1 = 150,value2 = 10;
    int Ret = 0;

    Ret = Divide(value1,value2);
    printf("\n Divide is %d",Ret);
    return 0;
}
