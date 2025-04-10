#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct
{
    char nome[80];
    float preco;
} PROD;

#define MAX_PROD 20
PROD lista[MAX_PROD];
int totalProd =0;

void lerProduto(PROD *p) {
    printf("Digite o nome do produto: ");
    scanf(" %[^\n]", p->nome);

    printf("Digite o valor do produto: ");
    scanf(" %f", &p->preco);
}

void inflacionar(PROD *p) {
    if (p->preco < 100.0) {
        p->preco += p->preco * 0.05;
    }
}

void imprimirProduto(PROD p) {
    printf("Nome: %-30s | Preço: R$ %.2f\n", p.nome, p.preco);
}

void ordenarProdutos(PROD lista[], int n){
    PROD temp;
    for(int i = 0; i < n-1; i++){//bubble sort
        for(int j = i + 1; j < n; j++){
            if(strcmp(lista[i].nome, lista[j].nome)>0){
                temp = lista[i];
                lista[i] = lista[j];
                lista[j] = temp;
            }
        }
    }
}


//Fazer um programa em "C" que lê uma lista de 20 produtos e e precós e armazêna-os em um array do tipo da estrutura abaixo.
//O programa deve, em seguida, ordenar o vetor em ordem alfabética de nome de produto e
//inflacionar os produtos cujo valor for menor que 100 em 5%. Por fim a lista de produtos/preços deve ser impressa.
int main()
{

    for (int i = 0; i < MAX_PROD; i++) {
        printf("\nProduto %d:\n", i + 1);
        lerProduto(&lista[i]);
        inflacionar(&lista[i]);
        totalProd++;
    }

    ordenarProdutos(lista, totalProd);

    printf("\nLista de produtos ordenada:\n");
    for (int i = 0; i < totalProd; i++) {
        imprimirProduto(lista[i]);
    }

    return 0;
}
