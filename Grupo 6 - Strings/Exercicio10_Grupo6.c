#include <stdio.h>
#include <string.h>

void tiraCaractere(char frase[], char caractere);

void tiraCaractere(char frase[], char caractere)
{
    int i, j = 0;
    for(i=0; i < frase[i] != '\0'; i++)//enquanto a frase não for vazia
    {
        if(frase[i] != caractere)//ira mostrat caracter por caracter
        {
            frase[j] = frase[i];
             j++;
        }
    }
     frase[j] = '\0'; // encerra a string corretamente

}
int main()
{
    char frase[81];
    char caractere;

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin); //asim vai ler ate os espaços

    // Remove o \n final da fgets
    frase[strcspn(frase, "\n")] = '\0';

    printf("Qual carcter deseja remover da frase: ");
    scanf(" %c", &caractere);


    tiraCaractere(frase, caractere);

    printf("\nFrase sem o caractere '%c': %s\n", caractere, frase);

    return 0;
}
