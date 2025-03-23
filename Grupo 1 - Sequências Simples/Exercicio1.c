#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, decimetro, milimetro, centimetro;

    printf("Insira um valor para saber sua conversão em milimetros, centimetros e decimetros: ");
    scanf("%d", &num);

    decimetro = num * 10;
    centimetro = num * 100;
    milimetro = num * 1000;

    printf("O valor em decimetros foi %d \n", decimetro);
    printf("O valor em centimetros foi %d \n", centimetro);
    printf("O valor em milimetros foi %d \n", milimetro);



    return 0;
}
