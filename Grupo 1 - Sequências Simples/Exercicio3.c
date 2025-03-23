#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Insira um numero em decimal para ver sua equivalencia em hexadecimal e octal: ");
    scanf("%d", &num);


    printf("Hexadecimal: %X\n", num);
    printf("Octal: %o\n", num);




    return 0;
}
