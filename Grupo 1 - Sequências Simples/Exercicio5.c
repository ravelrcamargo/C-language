#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double num1, num2,soma,produto,quadrado,raiz,seno;

    printf("Insira o primeiro numero  ");
    scanf("%lf", &num1);

    printf("\nInsira o segundo numero  ");
    scanf("%lf", &num2);

    soma = num1 + num2;
    produto= num1 * pow(num2, 2);
    quadrado = pow(num1, 2);
    raiz = sqrt((pow(num1,2) + pow(num2,2)));
    seno = sin(num1 - num2);

    printf("A soma dos numeros e de %.2lf\n", soma);
    printf("O produto do primeiro pelo quadrado do segundo resulta em %.2lf\n", produto);
    printf("O quadrado do primeiro numero e %.2lf\n", quadrado);
    printf("A raiz quadrada da soma dos quadrados resulta em %.2lf\n", raiz);
    printf("O seno da diferenca do primeiro resulta em %.2lf\n", seno);




    return 0;
}
