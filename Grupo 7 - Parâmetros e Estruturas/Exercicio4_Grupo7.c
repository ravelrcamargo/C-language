#include <stdio.h>
#include <string.h>
#include <ctype.h>


typedef struct{
    float nota1;
    float nota2;
    float nota3;
}Aluno;

void notasAluno(Aluno *a)//ponteiro que vai alterar direto na struct
{
     printf("Digite a nota 1: ");
    scanf(" %f", &a->nota1);

    printf("Digite a nota 2: ");
    scanf(" %f", &a->nota2);

    printf("Digite a nota 3: ");
    scanf(" %f", &a->nota3);


}

//Fazer uma função para ler e retornar o valor das 3 notas de um aluno.
int main()
{
    Aluno aluno;

    notasAluno(&aluno); // Passa o endereço da struct

    printf("\nNotas digitadas:\n");
    printf("Nota 1: %.2f\n", aluno.nota1);
    printf("Nota 2: %.2f\n", aluno.nota2);
    printf("Nota 3: %.2f\n", aluno.nota3);
    return 0;
}

