#include <stdio.h>
#include <stdlib.h>

void diferenca(float mat[5][3]);//dizer o tamanho fda matriz

void diferenca(float mat[5][3])
{

    float somaColPares = 0, somaLinImpares = 0;
    int contColPares = 0, contLinImpares = 0;

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(j % 2 != 0)
            {
                somaColPares += mat[i][j];
                contColPares++;
            }

        }
        // Soma elementos das linhas �mpares (1 e 3)
        for (int i = 0; i < 5; i++)
        {
            if (i % 2 != 0)   // linha �mpar
            {
                for (int j = 0; j < 3; j++)
                {
                    somaLinImpares += mat[i][j];
                    contLinImpares++;
                }
            }
        }
    }

    float mediaColPares = somaColPares / contColPares;
    float mediaLinImpares = somaLinImpares / contLinImpares;
    float diferenca = mediaColPares - mediaLinImpares;

    printf("\nM�dia colunas pares: %.2f", mediaColPares);
    printf("\nM�dia linhas �mpares: %.2f", mediaLinImpares);
    printf("\nDiferen�a: %.2f\n", diferenca);

}
// imprime a diferen�a entre a m�dia dos elementos das colunas pares e a m�dia dos elementos das linhas �mpares.
int main()
{
    float mat[5][3];
    printf("Preencha a matriz 5x3:\n");

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("\nLinha %d coluna %d: ", i+1, j+1);
            scanf("%f", &mat[i][j]);

        }
    }

    diferenca(mat);

    return 0;
}
