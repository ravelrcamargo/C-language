#include <stdio.h>
#include <string.h>

int simOuNao(char escolha[]);

int simOuNao(char escolha[]){
    if(strcmp(escolha, "SIM") == 0){//strcmp serve para comparar se as strings são iguais se usar so o == vai comparar so o primeiro caractere
            printf("SIM digitado");
        return 1;
    }else if(strcmp(escolha, "NAO") == 0){
        printf("NAO digitado");
        return 0;
    }
}
int main() {
   char escolha[10];

    printf("Digite SIM ou NAO para saber o retorno:");
    scanf("%s", escolha);

    simOuNao(escolha);


    return 0;
}
