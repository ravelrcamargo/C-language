#include <stdio.h>
#include <stdlib.h>

int main()
{
    double fahrenheit, celsius;

    printf("Insira uma temperatura em graus Fahrenheit  ");
    scanf("%lf", &fahrenheit);

    celsius = (fahrenheit- 32.0)* (5.0 / 9.0);

    printf("A temperatura em Celsius %lf", celsius);


    return 0;
}
