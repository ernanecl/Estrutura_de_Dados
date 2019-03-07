#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, num, metd;

      for(i=0;i<=9;i++)
      {
          printf("Digite um numero:  ");
          scanf("%d",&num);
          metd=num/2;
          printf("O metade de %d e %d\n",num,metd);
      }
    return 0;
}
