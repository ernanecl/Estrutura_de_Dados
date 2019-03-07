#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r, num[15];

    printf("Entre com 15 numeros.\n\n");
    for(int i=1;i<=15;i++){
        printf("Digite um numero: ");
        scanf("%f",&num[i]);
    }for(int i=1;i<=15;i++){
        r = sqrt(num[i]);
        printf("\nA raiz de %.0f = %.1f",num[i],r);
    }
    getch();
}
