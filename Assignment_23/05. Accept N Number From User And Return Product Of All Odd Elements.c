#include<stdio.h>
#include<conio.h>

int Product(int Arr[], int Length)
{
       int i = 0, Prod = 0;

        for(i = 0; i < Length; i++)
        {
            if(Arr[i]%2 != 0)
            {
                if(Prod == 0)
                {
                    Prod = 1;
                }
                Prod = Prod * Arr[i];
            }
        }
        return Prod;
}

int main()
{
   int Size = 0, Cnt  = 0;
   int *p = NULL;

   printf("\n Enter Number Of Elements => ");
   scanf("%d",&Size);

   p = (int *)malloc(Size * sizeof(int));

   if(p == NULL)
   {
       printf("Unable To Allocate Memory");
       return -1;
   }

   printf("\n Enter %d Elements => ",Size);

   for(Cnt = 0; Cnt < Size; Cnt++)
   {
       printf("\n Enter Element: %d => ",Cnt + 1);
       scanf("%d",&p[Cnt]);
   }

   printf("\n Product is %d.",Product(p,Size));

   free(p);

   getch();
   return 0;
}
