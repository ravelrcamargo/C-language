#include <stdio.h>
#include <string.h>

void mudaLugar(char frase[], char caractere, int pos);

void mudaLugar(char frase[], char caractere, int pos)
{
    int tamanho = strlen(frase);
    // Move os caracteres para a direita, de tr�s pra frente
    for (int i = tamanho; i >= pos; i--) {
        frase[i + 1] = frase[i]; // "empurra" tudo uma posi��o � frente
    }

    // Insere o caractere na posi��o desejada
    frase[pos] = caractere;

}
//Escreva uma fun��o em "C" que receba um string um caracter e o �ndice de uma posi��o do string
//como par�metro e insira o caracter na posi��o "empurrando" todos os demais para o lado.
int main()
{
    char frase[81];
    char caractere;
    int pos = 0;

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin); //assim vai ler ate os espa�os

    // Remove o \n final da fgets
    frase[strcspn(frase, "\n")] = '\0';

    printf("Qual caracter deseja incluir: ");
    scanf(" %c", &caractere);

    int tamanho = strlen(frase);

    printf("Em qual posicao deseja por esse caracter: ");
    scanf(" %d", &pos);

    while(pos > tamanho || pos < 0){
        printf("Posicao invalida ela tem que estar entre 0 e %d tente novamente", tamanho);
        scanf(" %d", &pos);
    };

    mudaLugar(frase, caractere, pos);

    printf("\nFrase sem o caractere '%c': %s\n", caractere, frase);

    return 0;
}
