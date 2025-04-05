#include <stdio.h>
#include <stdlib.h>


double calcularExp(double num){
   double termo = 1.0;
   double resultado = 1.0;
   int n =1;

   while(termo > 1e-6){
    termo *= num /n;
    resultado = resultado + termo;
    n++;
   }
     return resultado;

}
int main()
{
   double num;
    printf("Digite um valor para x: ");
    scanf("%lf", &num);

     printf("O valor aproximado de e^%.2lf é: %.6lf\n", num, calcularExp(num));


    return 0;
}
