#include <stdio.h>
#include <stdlib.h>

void verificar(int vet[], int media);

void verificar(int vet[], int media){
    int achou = 0;
    for(int i = 0; i < 10; i++){
        if(vet[i] == media){
            printf("\nO valor %d e igual a media que foi %d", vet[i], media);
            achou = 1;
        }
    }
    if(!achou){
       printf("\nNenhum numero igual a media foi encontrado.\n");
    }
}

int main()
{
    int vet[10];
    int soma = 0;
    int media = 0;
    printf("Preencha o vetor com 10 valores\n");
    for(int i = 0; i < 10; i++)
    {
        printf("Valor de numero %d: ", i+1);
        scanf("%d", &vet[i]);
        soma += vet[i];

    }

    media = soma / 10;

    verificar(vet, media);

    return 0;
}
