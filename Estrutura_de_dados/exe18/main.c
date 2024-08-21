#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i = 0;

    do
    {
    printf("Insira um numero: ");
    scanf("%d", &num);
    i++;
    }

    while(num >= 0);
    printf("\n\nTotal de números digitados: %d\n\nTotal de numeros positivos: %d\n", i, (i-1));

    return(0);
}
