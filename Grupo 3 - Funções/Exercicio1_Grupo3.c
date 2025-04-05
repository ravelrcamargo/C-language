#include <stdio.h>
#include <stdlib.h>



double potencia(double x, int n){

    double resultado = 1.0;

    for(int i = 1; i <= n; i++){
        resultado *=x;
    }
    return resultado;
}
int main()
{
    double x;
    int n;

    printf("Digite o valor de x (base): ");
    scanf("%lf", &x);

    printf("Digite o valor de n (expoente): ");
    scanf("%d", &n);

    double resultado = potencia(x, n);
    printf("%.2lf elevado a %d e %.2lf\n", x, n, resultado);




    return 0;
}
