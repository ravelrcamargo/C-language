#include <stdio.h>
#include <stdlib.h>

int main()
{
    double nota1, nota2, media;

    while(1){

        printf("Qual a nota da primeira prova:(Para encerrar digite 50) ");
        scanf("%lf", &nota1);

        if(nota1 == 50){
            printf("Encerrar o programa");
            break;
        }
        if (nota1 < 0 || nota1 > 10) {
            printf("Erro: A nota deve estar entre 0 e 10.\n");
            continue;
        }

        printf("Qual a nota da segunda prova: ");
        scanf("%lf", &nota2);

        if (nota1 < 0 || nota1 > 10) {
            printf("Erro: A nota deve estar entre 0 e 10.\n");
            continue;
        }

         media = (nota1 + nota2) / 2;
        printf("Média do aluno: %.2lf\n", media);
    }



    return 0;
}
