#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[30],b,*c;
    int d,e;

    printf("Digite uma palavra: ");
    gets(a);

    printf("Digite um caractere: ");
    scanf("%c",&b);

    c=NULL;
    e=strlen(a);

    for (d=0;d<=e;d++){
        if (a[d]==b)
        {
            c=&a[d];
            printf("\nEndereco do caractere digitado: %p\n", c);
            break;
        }
    }
    if (c==NULL) printf("\n%p\n", c);

    return 0;
}
