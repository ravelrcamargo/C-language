#include <stdio.h>
#include <stdlib.h>

void mediaAluno(double notas[], int tamanho);

void mediaAluno(double notas[], int tamanho){
    double soma = 0, media;
    for(int i =0; i < tamanho; i++){
        soma+= notas[i];
    }
    media = soma / tamanho;
    printf("A media do aluno foi de %lf\n", media);
}

int main() {
  double notas[5];
  for(int i = 0; i < 5; i++){
    printf("\nDigite a nota do aluno:");
    scanf(" %lf", &notas[i]);//nao esquecer & para pegar o scanf e nao esquecer do espaço para digitar ded novo
  }
  int tamanho = sizeof(notas) / sizeof(notas[0]);

    mediaAluno(notas, tamanho);

  return 0;
}
