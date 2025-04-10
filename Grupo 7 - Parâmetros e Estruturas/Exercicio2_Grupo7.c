#include <stdio.h>
#include <string.h>
#include <ctype.h>

int dividir(float numerador, float denominador, float *resultado)
{
    if (denominador == 0)
    {
        return 0;
    }

    *resultado = numerador / denominador;
    return 1;

}

//Fazer uma fun��o em "C" que retorna a raz�o entre dois n�meros. A fun��o deve retornar pelo comando return o razzaao == divisao
//valor 1 se a opera��o foi poss�vel e o valor 0 se a opera��o n�o foi poss�vel
// (divis�o por zero, por exemplo). O resultado da divis�o deve retonar por um par�metro por refer�ncia.
int main()
{

    float x, y;
    printf("Digite dois numeros: ");
    scanf("%f %f", &x, &y);


    float resultado;

    if (dividir(x, y, &resultado))
    {
        printf("Resultado: %.2f\n", resultado);
    }
    else
    {
        printf("Divis�o por zero!\n");
    }
    return 0;
}
