#include <stdio.h>
#include <stdlib.h>

main()
{
    int tam;
    char nome[50];

    printf("Digite um nome: ");
    gets(nome);
    tam = strlen(nome);

    printf("\n%d\n",tam);
    return 0;
}
