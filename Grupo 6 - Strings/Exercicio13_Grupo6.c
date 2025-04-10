#include <stdio.h>
#include <string.h>

int conv2dec(const char *numStr, int base) {
     int resultado = 0;
    int potencia = 1; // Come�a com base^0
    int len = strlen(numStr);

    // Percorre a string de tr�s pra frente
    for (int i = len - 1; i >= 0; i--) {
        char ch = toupper(numStr[i]); // Deixa mai�sculo para aceitar 'a'-'f'
        int valor;

        if (ch >= '0' && ch <= '9')
            valor = ch - '0';
        else if (ch >= 'A' && ch <= 'F')
            valor = ch - 'A' + 10;
        else {
            printf("Caractere inv�lido: %c\n", ch);
            return -1;
        }

        if (valor >= base) {
            printf("D�gito %c inv�lido para base %d\n", ch, base);
            return -1;
        }

        resultado += valor * potencia;
        potencia *= base;
    }

    return resultado;
}
//Fazer uma rotina que recebe como par�metro um string contendo um n�mero e um inteiro
//indicanndo a base na qual o n�mero est� expresso, retornando o seu valor em decimal. Ex: conv2dec("345", 8) => 229
int main()
{
    char numero[50];
    int base;

    printf("Digite o numero: ");
    scanf(" %s", numero);

    printf("Qual a base desse numero:(ex: 2, 8, 10, 16) ");
    scanf(" %d", &base);
    //deve retornar o valor decimal correspondente (base 10).

    int decimal = conv2dec(numero, base);


    if (decimal != -1)
        printf("O n�mero %s na base %d vale %d em decimal.\n", numero, base, decimal);
    else
        printf("Erro na convers�o.\n");


    return 0;
}
