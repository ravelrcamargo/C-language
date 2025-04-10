#include <stdio.h>
#include <string.h>

void numeroConvertido(int numero);

void numeroConvertido(int numero){
    char numString[81];
    sprintf(numString, "%d", numero); // Converte o número para string

     int tamanho = strlen(numString);

      int i = 0;
    if (numString[0] == '-') {//ja faz o teste e ve se aprimeira coisa digitada foi -
        printf("menos ");//ja acrescenta o menos na frente de tudo
        i = 1; // começa a partir do próximo caractere
    }


     for(int i = 0; i < tamanho; i++){

        switch(numString[i]){
            case '0':printf("zero ");break;
            case '1':printf("um ");break;
            case '2':printf("dois ");break;
            case '3':printf("tres ");break;
            case '4':printf("Quatro ");break;
            case '5':printf("Cinco ");break;
            case '6':printf("Seis ");break;
            case '7':printf("sete ");break;
            case '8':printf("oito ");break;
            case '9':printf("nove ");break;
        }
     }

}

int main()
{
   //Fazer um programa em "C" que solicita um número inteiro e soletra o mesmo na tela. Exemplo: Se o número lido for 123, o programa deverá imprimir um dois três.

    int numero = 0;

    printf("Digite um numero inteiro para ser transformado em string: ");
    scanf(" %d", &numero);

    numeroConvertido(numero);

    return 0;
}
