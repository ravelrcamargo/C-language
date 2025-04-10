#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct {
    int soma;
    int diferenca;
    int produto;
} Resultado;


Resultado operacoes(int x, int y) {
    Resultado res;
    res.soma = x + y;
    res.diferenca = x - y;
    res.produto = x * y;
    return res;
}


int main() {

   int x, y;
    printf("Digite dois numeros: ");
    scanf("%d %d", &x, &y);


    Resultado r = operacoes(x, y);
    printf("Soma: %d\n", r.soma);
    printf("Diferença: %d\n", r.diferenca);
    printf("Produto: %d\n", r.produto);

    return 0;
}
