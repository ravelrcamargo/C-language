#include <stdio.h>
#include <stdlib.h>

int main()
{
    double produto;
    printf("Qual o preco do produto? ");
    scanf("%lf", &produto);

    if(produto < 100){

        produto = produto +(produto * 0.10);
    }else{
        produto = produto +(produto * 0.20);
    }

    printf("O novo valor do produto com a inflacao foi de R$%.2lf", produto);



    return 0;
}
