#include <stdio.h>
#include <string.h>

int conv2dec(const char *numStr, int base) {
     int resultado = 0;
    int potencia = 1; // Começa com base^0
    int len = strlen(numStr);

    // Percorre a string de trás pra frente
    for (int i = len - 1; i >= 0; i--) {
        char ch = toupper(numStr[i]); // Deixa maiúsculo para aceitar 'a'-'f'
        int valor;

        if (ch >= '0' && ch <= '9')
            valor = ch - '0';
        else if (ch >= 'A' && ch <= 'F')
            valor = ch - 'A' + 10;
        else {
            printf("Caractere inválido: %c\n", ch);
            return -1;
        }

        if (valor >= base) {
            printf("Dígito %c inválido para base %d\n", ch, base);
            return -1;
        }

        resultado += valor * potencia;
        potencia *= base;
    }

    return resultado;
}
//Fazer uma rotina que recebe como parâmetro um string contendo um número e um inteiro
//indicanndo a base na qual o número está expresso, retornando o seu valor em decimal. Ex: conv2dec("345", 8) => 229
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
        printf("O número %s na base %d vale %d em decimal.\n", numero, base, decimal);
    else
        printf("Erro na conversão.\n");


    return 0;
}
