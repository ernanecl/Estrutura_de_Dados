#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, num, quad;

      for(i=0;i<=4;i++)
      {
          printf("Digite um numero:  ");
          scanf("%d",&num);
          quad=num*num;
          printf("O quadrado de %d e %d\n",num,quad);
      }
    return 0;
}
