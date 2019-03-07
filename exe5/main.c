#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y=0;

    for (x=1;x<=100;x++)
    {
        y=y+x;
        printf ("%d\n",x);
    }
    printf ("%d\n",y);
}
