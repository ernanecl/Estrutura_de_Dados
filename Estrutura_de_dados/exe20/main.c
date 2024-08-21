#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, num, quad;

    for(i=0;i<=10;i++)
    {
        printf("\nDigite um numero:  ");
        scanf("%d",&num);

        if(num>0)
        {
            quad=num*num;
            printf("O quadrado de %d e %d\n",num,quad);
        }else{ printf("Numero digitado invalido\n");
        }
    }
    return 0;
}
