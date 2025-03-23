#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    printf("Imprimindo tabela ASCII\n");

    for(i=0; i<=127;i++){

        printf("Decimal: %d\t Hexadecimal: 0x%02X\t Caractere: ", i, i);

         if (i < 32 || i == 127) {
            printf("Não imprimível\n");
        } else {
            printf("%c\n", i);
        }
    }



    return 0;
}
