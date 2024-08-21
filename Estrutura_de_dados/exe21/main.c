#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fat, num,i;


    do{
        printf("\nDigite um numero: ");
        scanf("%d", &num);

        i=num;

        for(fat = 1; num > 1; num = num - 1)
        fat = fat * num;

        printf("Fatorial de %d: %d\n",i,fat);
     }while(num>0);

    return 0;
}
