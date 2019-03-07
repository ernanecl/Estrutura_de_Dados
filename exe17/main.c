#include<stdio.h>
#include<stdlib.h>

int main()
{
    float i,p,med1,med2,med3,med4,soma=0,y=0;
    int x;

    for(x=1;x<=2;x++)
    {
        printf("\nDigite a idade da %d pessoa: ",x);
        scanf("%f",&i);

        printf("Digite o peso da %d pessoa: ",x);
        scanf("%f",&p);

        if(i>0&&i<11)
        {
                y=y+1;
                soma=soma+p;
                med1=soma/y;
        }

        if(i>10&&i<=20)
        {
                y=y+1;
                soma=soma+p;
                med2=soma/y;
        }

        if(i>20&&i<31)
        {
                y=y+1;
                soma=soma+p;
                med3=soma/y;
        }

        if(i>30)
        {
                y=y+1;
                soma=soma+p;
                med4=soma/y;
        }
    }
    printf("\nA media dos pesos das pessoas entre 1 e 10 anos   = %.2f\n",med1);
    printf("\nA media dos pesos das pessoas entre 11 e 20 anos  = %.2f\n",med2);
    printf("\nA media dos pesos das pessoas entre 21 e 30 anos  = %.2f\n",med3);
    printf("\nA media dos pesos das pessoas acima de 30 anos = %.2f\n\n",med4);

    system("pause");
    return(0);
}
