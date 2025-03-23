#include <stdio.h>
#include <stdlib.h>

int main()
{
    double valor1, valor2, resultado;
    char operador;

    printf("\nDigite o primeiro valor: ");
    scanf("%lf", &valor1);

    printf("\nDigite um operador pra ser usado (+, -, /, *): ");
    scanf(" %c", &operador);


    printf("\nDigite o segundo valor: ");
    scanf("%lf", &valor2);

    switch(operador){
        case '+':resultado = valor1 + valor2;break;
        case '-':resultado = valor1 - valor2;break;
        case '*':resultado = valor1 * valor2;break;
        case '/':
            if(valor2 != 0){
                resultado = valor1 / valor2;
            }else{
                printf("Erro: n�o � possivel divis�o por 0 \n");
                return 1;
            }
            break;
        default:
            printf("\nOpera�ao invalida!\n");
            return 1;
    }

    printf("Resultado: %.2lf\n", resultado);


    return 0;


}
