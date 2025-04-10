#include <stdio.h>
#include <string.h>

char* achaCaracter(char frase[]);

char* achaCaracter(char frase[])
{
    for(int i=0; i < frase[i] != '\0'; i++)//enquanto a frase n�o for vazia
    {
        if(frase[i] != ' ')//ira mostrat caracter em branco detalhe as duplas � string e aspas simples � caractere
        {
           return &frase[i];
        }
    }

   return NULL;

}
//Fazer uma rotina em "C" que recebe um string como par�metro e devolve o endere�o do primeiro caracter branco encontrado.
int main()
{
    char frase[81];

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin); //assim vai ler ate os espa�os

    // Remove o \n final da fgets
    frase[strcspn(frase, "\n")] = '\0';

    char *endereco = achaCaracter(frase);

    if (endereco != NULL) {
        printf("O endereco do primeiro caractere em branco esta em: %p\n", (void*)endereco);
        printf("O caractere nesse endereco eh: '%c'\n", *endereco);
    } else {
        printf("Nenhum caractere em branco encontrado.\n");
    }


    return 0;
}
