#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qntd,num,maior,menor;

    printf("\nDigite a quantidade de numeros digitados: ");
    scanf("%d",&qntd);

    printf("\nDigite um numero: ");
    scanf("%d",&num);

    maior = num;
    menor = num;

    for(int i=1;i<qntd;i++)
    {
        printf("Digite um numero: ");
        scanf("%d",&num);

        if(num > maior) maior = num;
        if(num < menor) menor = num;
    }

    printf ("\nO maior valor digitado: %d\nO menor valor digitado: %d\n", maior,menor);
    return 0;
}
