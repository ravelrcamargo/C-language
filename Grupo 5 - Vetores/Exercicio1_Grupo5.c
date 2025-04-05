#include <stdio.h>
#include <stdlib.h>

int main() {
  int num[] = {10,9,80,4,13,25,4,3,22,1};
  int tamanho = sizeof(num) / sizeof(num[0]);
  int menor = num[0];
  int maior = num[0];

  for(int i =0; i < tamanho; i++){
    if(num[i] > maior){
        maior = num[i];
    }else if(num[i] < menor){
        menor = num[i];
    }
  }

  printf("\nO menor valor e %d", menor);
  printf("\nO maior valor e %d", maior);





  return 0;
}
