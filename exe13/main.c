#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,soma=0;

    for(int i=1;i<=20;i++)
    {
        printf("Digite um numero: ");
        scanf("%d",&num);

        if(num<=15)
            soma=soma+num;
    }

    printf ("\nA soma dos numeros que os quadrados sao menores que 255: %d\n", soma);
    return 0;
}
