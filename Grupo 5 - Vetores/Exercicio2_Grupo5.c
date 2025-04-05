#include <stdio.h>
#include <stdlib.h>

int main(){
  int vet[] = {10,9,80,4,13,25,95,3,22,1};
  int tamanho = sizeof(vet) / sizeof(vet[0]);


  //Usando bubble sort

  for(int i = 0; i < tamanho-1; i++){// N-1 passadas porque, após N-1 passadas, o vetor já estará ordenado porque na ultima passad ja ordena as duas ultimas posições
    for(int j =0; j < tamanho -1 -i; j++){//porque a cada nova comparação os maiores ja vão estar la no final
        if(vet[j] > vet[j + 1]){//verifica se o elemente é amior que o próximo(se for eles estão trocados)
            int temp = vet[j];//armazena temporariamnte o valor de j que foi maior que o proximo
            vet[j] = vet[j + 1];// como j+1 é menor ele foi pro lugar mais para tras onde estava j entao j recebe esse valor novo e menor
            vet[j + 1] = temp;//e o j + 1 que esta mais a frente recebe o valor de temp que estava guarado ali por ser maior
        }
    }
  }


  //usando o selection sort
  //Troca esse menor elemento com o primeiro da parte não ordenada.
  for(int i = 0; i < tamanho-1; i++){
     int minIndex = i; // Índice do menor elemento
     for (int j = i + 1; j < tamanho; j++) {//porque a primeira posição ja vai estar ordenada
            if (vet[j] < vet[minIndex]) {
                minIndex = j; // Atualiza o menor elemento
            }
        }
        int temp = vet[i];// o primeiro valor de antes não e perdido
        vet[i] = vet[minIndex];//o vet na posição 0 ganha o menor valor
        vet[minIndex] = temp;//o valor troca de lugar

  }

  //Usando o insertion sort
  for (int i = 1; i < tamanho; i++) {
        int chave = vet[i];//o segundo valor do vet nesse caso 9
        int j = i - 1;// j começa em 0

        while (j >= 0 && vet[j] > chave) { //sim o elemento posição 0 é 10 maior que 9
            vet[j + 1] = vet[j];//aqui o vetor na posição 1 recebe 10
            j--;
        }
        vet[j + 1] = chave;//agora a chave passa a ser 9
    }
}

  for(int i = 0; i < tamanho; i++){
    printf(" %d  ",vet[i]);
  }



  return 0;
}
