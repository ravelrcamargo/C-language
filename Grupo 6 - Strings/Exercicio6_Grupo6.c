#include <stdio.h>
#include <string.h>

void qtdePalavras(char frase[], int tamanho);

void qtdePalavras(char frase[], int tamanho)
{
    int qtde = 1;
    for(int i=0; i < tamanho; i++)
    {
        printf(" %c", frase[i]);
        if(frase[i] == ' ')//ira mostrat caracter por caracter
        {
            printf("\n");
            qtde++;
        }
    }
    printf("\nA quantidade de palavras foi de %d\n", qtde);


}
int main()
{
    char frase[81];

    printf("Digite palavras separadas por espaços:");
    fgets(frase, sizeof(frase), stdin); //asim vai ler ate os espaços

    int tamanho = strlen(frase);

    qtdePalavras(frase, tamanho);

    return 0;
}
