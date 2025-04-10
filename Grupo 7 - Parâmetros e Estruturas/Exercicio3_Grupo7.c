#include <stdio.h>
#include <string.h>
#include <ctype.h>

void operacoes(int numeros[], int tamanho)
{
    int total =0;
    float media = 0;
    int menor = numeros[0];
    int maior = numeros[0];

    for(int i = 0;i< tamanho;i++){
            if(i != tamanho - 1 && numeros[i] < menor){
                menor = numeros[i];
            }
            if(numeros[i] > maior){
                maior = numeros[i];
            }
        total += numeros[i];
    }
    media = (float)total / tamanho;//fazer um cast para o valor sair como float

    printf("\nA media dos valores do vetor foi de %.2f", media);
    printf("\nO menor valor tirando a ultima posicao foi %d", menor);
    printf("\nO maior valor do vetor foi %d", maior);
}

//Fazer uma rotina em "C" que recebe um vetor de números inteiros como parâmetro onde todos os valores exceto o último são positivos e devolve:

//a média dos valores do vetor;
//o menor valor do vetor (sem considerar o último)
//o maior valor do vetor
int main()
{

    int numeros[]={9, 6, 15, 25,7, -3};

    int tamanho = sizeof(numeros) / sizeof(numeros[0]);//strlen só funciona com strings (vetores de char)
    //sizeof(numeros) retorna o tamanho total do vetor em bytes.
    //sizeof(numeros[0]) retorna o tamanho de um elemento do vetor (no caso, um int).

    operacoes(numeros, tamanho);
    return 0;
}
