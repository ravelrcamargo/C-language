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

//Fazer uma função em "C" que retorna a razão entre dois números. A função deve retornar pelo comando return o razzaao == divisao
//valor 1 se a operação foi possível e o valor 0 se a operação não foi possível
// (divisão por zero, por exemplo). O resultado da divisão deve retonar por um parâmetro por referência.
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
        printf("Divisão por zero!\n");
    }
    return 0;
}
