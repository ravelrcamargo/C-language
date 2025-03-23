#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;

    printf("Imprimindo a tabuada de 1 a 9 ");

    for(i = 1; i <= 10; i++){
            printf("\n");
        for(j = 1; j <= 10; j++){
           printf("\n%d X % d = %d", i,j, (i * j) );
        }
    }




    return 0;
}
