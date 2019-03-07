#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char palavra[30];
    int x,tam;

    printf("Digite uma palavra: ");
    gets(palavra);
    tam = strlen(palavra);

    for (x=tam; x >= 0; x--)
    {
        printf("%s\n",&palavra[x]);
    }
    return 0;
}
