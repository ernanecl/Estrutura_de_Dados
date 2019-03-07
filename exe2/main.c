#include <stdio.h>
//#include <stdlib.h>

int main()
{
    int x,y;

    for (x= 1;x<= 10;x++)
    {
        y= x%2;
        if (y%2 ==0)
            printf ("%d\n",x);
    }
}
