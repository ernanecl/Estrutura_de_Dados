#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s,i,x,y;

    printf("Digite o valor superior: ");
    scanf("%d", &s);

    printf("Digite o valor inferior: ");
    scanf("%d", &i);printf("\n");

    for(x=i;x<=s;x++)
    {
        y=(5*(x-32))/9;
        printf("Fahrenheit: %d  |  Celsius: %d\n", x,y);
    }

    return 0;
}
