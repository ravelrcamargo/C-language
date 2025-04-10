#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


int main()
{

    char texto[81];

    printf("Digite varias palavras e separe por espacos para imprimir: ");
    fgets(texto, sizeof(texto), stdin);//primeiro e o nome da string depois o tamanho para não passar e por fim de onde vai ler ou seja o teclado stadin e o teclado

     // Remove o \n se estiver presente
    texto[strcspn(texto, "\n")] = '\0';

    for(int i = 0; texto[i]!= '\0'; i++)
    {
        printf(" %c", texto[i]);
        if (texto[i]== ' '){
            printf("\n");
        }

    }



    return 0;
}
