#include<stdio.h>
#include<conio.h>

 void DisplayASCII(int ch)
 {
     printf("\n  =========== >> ASCII Table << ===========\n");

     while(ch < 255)
     {
         printf("\n\t\t %d = %c",ch ,ch);
         ch++;
     }
     printf("\n\n  =========== >> ASCII Table << ===========\n");
 }
int main()
{
    int Ch = '\0';

    DisplayASCII(Ch);

    getch();
    return 0;
}
