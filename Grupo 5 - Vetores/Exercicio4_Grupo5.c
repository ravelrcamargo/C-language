#include <stdio.h>
#include <stdlib.h>

void valores(double vet[], int tamanho);

void valores(double vet[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        printf("\nDigite os valores para ser armazenados no vetor: ");
        scanf(" %lf", &vet[i]);
    }
     printf("Valores do vetor");
   for(int i = 0; i < tamanho; i++){
    printf(" %.2lf", vet[i]);
   }
}

int main() {
    int quantidade = 0;
    printf("Quantos valores quer que seja digitado?");
    scanf("%d", &quantidade);

    double vet[quantidade];

    int tamanho = sizeof(vet) / sizeof(vet[0]);

    valores(vet, tamanho);

  return 0;
}
