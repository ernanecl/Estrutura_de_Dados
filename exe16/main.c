#include<stdio.h>
#include<stdlib.h>
#define tam 100

typedef struct
{
    char palavra[tam];

}dados;

void criptografa(dados cripto);

int main (){

    dados nome;
    criptografa(nome);

    system("pause");
    return 0;

}


void criptografa(dados cripto)
{
     printf("Digite uma frase: ");
     gets(cripto.palavra);


    for(int i = 0 ; i < strlen(cripto.palavra) ; i++)
    {
    if(cripto.palavra[i] == 'a'){
                cripto.palavra[i] = 'x';
            }
            else  if(cripto.palavra[i] == 'e'){
                cripto.palavra[i] = 'y';
            }
           	else if (cripto.palavra[i] == 'i'){
                cripto.palavra[i] = 'w';
            }
            else if (cripto.palavra[i] == 'o'){
                cripto.palavra[i] = 'k';
            }
            else if (cripto.palavra[i] == 'u'){
                cripto.palavra[i] = 'z';
            }
             else {
                  cripto.palavra[i] = cripto.palavra[i];
                  }
    }

            for(int i = 0 ; i< strlen(cripto.palavra); i++){
            	putchar(cripto.palavra[i]);
            }

            printf("\n");
}
