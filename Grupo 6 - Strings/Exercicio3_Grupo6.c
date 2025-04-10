#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void imprimirNormal(char texto[], int i) {
    if (texto[i] == '\0') return;           // Caso base: fim da string
    printf("%c", texto[i]);                 // Imprime o caractere atual
    imprimirNormal(texto, i + 1);           // Chama a função para o próximo caractere
}

void imprimirAoContrario(char texto[], int i) {
    if (texto[i] == '\0') return;           // Caso base: fim da string
    imprimirAoContrario(texto, i + 1);      // Chama a função primeiro
    printf("%c", texto[i]);                 // Só imprime ao "voltar" da recursão
}

int main()
{

    char texto[81];

    printf("Digite varias palavras e separe por espacos para imprimir: ");
    fgets(texto, sizeof(texto), stdin);

     // Remove o \n se estiver presente
    texto[strcspn(texto, "\n")] = '\0';

    printf("\nString normal: ");
    imprimirNormal(texto, 0);

    printf("\nString ao contrario: ");
    imprimirAoContrario(texto, 0);


    return 0;
}
