#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, maior;

    printf("\nDigite um numero: ");
    scanf("%d",&num);

    maior = num;

    for(int i=1;i<=4;i++)
    {
        printf("Digite um numero: ");
        scanf("%d",&num);

        if(num > maior) maior = num;
    }

    printf ("\nO maior valor digitado: %d\n", maior);
    return 0;
}
