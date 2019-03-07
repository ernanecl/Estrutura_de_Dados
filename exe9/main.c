#include <stdio.h>
#include <stdlib.h>

int main()
{
    float pol=2.54;
    int cent;

    for(int i=1;i<=20;i++){
        cent = i;
        cent = cent*pol;
        printf("\n%d polegadas = %d centimetros",i,cent);
    }
    getch();
}
