#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


int main()
{
    int total = 0, pontuacao = 0, numeros = 0, minusculas = 0;
    char texto[81];

    printf("Digite uma String de ate 80 caracteres: ");
    fgets(texto, sizeof(texto), stdin);//primeiro e o nome da string depois o tamanho para não passar e por fim de onde vai ler ou seja o teclado stadin e o teclado

     // Remove o \n se estiver presente
    texto[strcspn(texto, "\n")] = '\0';

    for(int i = 0; texto[i]!= '\0'; i++)
    {

        if (ispunct(texto[i]))//verifica se o caractere é pontuação (como .,!?)
        {
            pontuacao++;
        }
        if (isdigit(texto[i]))// verifica se é número.
        {
            numeros++;
        }
        if (islower(texto[i]))// verifica se é letra minúscula.
        {
            minusculas++;
        }
        total++;
    }

    printf("\n o numero de caracteres foi de %d", total);
    printf("\n o numero de caracteres com pontuacao foi de %d", pontuacao);
    printf("\n o numero de caracteres de numeros foi %d", numeros);
    printf("\n o numero de caracteres minusculos foi de %d", minusculas);

    return 0;
}
