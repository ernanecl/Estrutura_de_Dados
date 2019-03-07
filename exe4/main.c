#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x,y;

   for (x= 1;x<= 500;x++)
   {
        y= x%5;
        if (y%5 ==0)
            printf ("%d\n",x);
    }
}
