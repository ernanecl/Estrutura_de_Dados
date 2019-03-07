#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
    int num, i=0;

    do{
        printf ("informe um numero: ");
        scanf("%d",&num);

        if(num>=100 && num<=200)
            i=i+1;
     }while(num!=0);
        printf("\nForam digitados %d numeros entre 100 e 200\n",i);
     return 0;
 }
