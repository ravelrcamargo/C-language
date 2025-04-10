#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_NOMES 20
#define TAM_NOME 50// sao duas constantes que não vao alterar o valor

typedef struct
{
    char prenome[TAM_NOME];
    char sobrenome[TAM_NOME];
}Pessoa; //como se fosse uma classe em java


void ordenarPorPrenome(Pessoa lista[], int total){
    for(int i = 0; i < total - 1; i++){
        for(int j =i + 1; j< total; j++){
            if(strcmp(lista[i].prenome, lista[j].prenome) > 0){
                Pessoa temp = lista[i];
                lista[i]= lista[j];
                lista[j] = temp;
            }
        }
    }
}

// Função para ordenar nomes por sobrenome
void ordenarPorSobrenome(Pessoa lista[], int total) {
    for (int i = 0; i < total - 1; i++) {
        for (int j = i + 1; j < total; j++) {
            if (strcmp(lista[i].sobrenome, lista[j].sobrenome) > 0) {
                Pessoa temp = lista[i];
                lista[i] = lista[j];
                lista[j] = temp;
            }
        }
    }
}

// Função que calcula a média de letras por nome completo (sem contar espaços)
float calcularMediaLetras(Pessoa lista[], int total) {
    int letras = 0;
    for (int i = 0; i < total; i++) {
        letras += strlen(lista[i].prenome);
        letras += strlen(lista[i].sobrenome);
    }
    return (float)letras / total;
}


int main()
{
    Pessoa lista[MAX_NOMES];//FAZ UMA LISTA DO TIPO PESSOA
    int total = 0;

    while(total < MAX_NOMES)
    {
        char entrada[100];

        printf("Digite os nomes (prenome e sobrenome), ou FIM para encerrar:\n");

        fgets(entrada,sizeof(entrada), stdin);//aonde vai colocar a entrada, o tamanho e stdin vai ler do teclado Isso é melhor que scanf("%s", ...) porque scanf para no espaço.

        entrada[strcspn(entrada, "\n")] = '\0';//string complement span (número de caracteres até encontrar algo)Muito usado para remover o \n que o fgets() pega no final. remove o \n do final, caso o usuário dê Enter. strcspn retorna a posição do \n, e o \0 "corta" a string ali.

        if(strcmp(entrada, "FIM")==0) //retorna 0 se forem iguais.// O break interrompe o while.
        {
            break;
        }
        //total é zero e igual um for
        sscanf(entrada,"%s" "%s", lista[total].prenome, lista[total].sobrenome);//sscanf quebra a entrada em duas palavras, separadas por espaço, e guarda nas posições prenome e sobrenome da estrutura lista[total].Se o nome for composto (ex: "Maria Clara Rocha"), ele só vai pegar "Maria" e "Clara" — o resto é ignorado.
        total++;
    }

    ordenarPorPrenome(lista, total);
    printf("\nOrdem alfabetica por prenome:\n");
    for (int i = 0; i < total; i++) {
        printf("%s %s\n", lista[i].prenome, lista[i].sobrenome);
    }

    // ETAPA 3: Ordenar por sobrenome
    ordenarPorSobrenome(lista, total);
    printf("\nNomes em ordem alfabética por sobrenome:\n");
    for (int i = 0; i < total; i++) {
        printf("%s %s\n", lista[i].prenome, lista[i].sobrenome);
    }

    // ETAPA 4: Calcular média de letras
    float media = calcularMediaLetras(lista, total);
    printf("\nMédia de letras por nome: %.2f\n", media);


    return 0;
}
//PASSO A PASSO
//1 primeiro crie uma estrutura parecida com uma classe java com o nome Pessoa
//2 se quiser pode criar constante para os tamanhos permitidos
//3 crie um array de pessoas com o nome lista cada espaço armazena duas respostas
//4 fazer um while com a condição de parada para incluir os nomes e sobrenomes
//4.1char entrada[100]; para armazenar tempoririamente as infromações
//5 fgets(entrada,sizeof(entrada), stdin); // isso e bom porque le os espaços
//6entrada[strcspn(entrada, "\n")] = '\0';// tira os espaços para não dar bug
//7  if(strcmp(entrada, "FIM")==0) vai comparar se o digitado foi fim se for sai
//8 sscanf(entrada,"%s" "%s", lista[total].prenome, lista[total].sobrenome);//sscanf quebra a entrada em duas palavras,
//separadas por espaço, e guarda nas posições prenome e sobrenome da estrutura lista[total].Se o nome for composto
//(ex: "Maria Clara Rocha"), ele só vai pegar "Maria" e "Clara" — o resto é ignorado.
//9 total ++ vai ir mudando a posição da lista pessoas
//10  ordenarPorPrenome(lista, total); chama a função para orgazinar os prenomes
//11  ordenarPorSobrenome(lista, total); chama a função para organizar os sobrenomes
//12 chama a função para calcular a media
//13 void ordenarPorPrenome(Pessoa lista[], int total)as duas funções são bem iguais fazem a mesma coisa so que uma vai na lista[i].prenome
//e a outra vai no lista[i].sobrenome
//14 No último elemento (índice total - 1), não há mais ninguém à frente para comparar. Exemplo: se total = 5, os índices vão de 0 a 4. No índice 4, você não precisa comparar com ninguém.
//15Ele começa em i + 1 porque:
//Não faz sentido comparar um elemento com ele mesmo (ex: i == j).usando o bubble sort
//16 A função strcmp(a, b):Compara duas strings (a e b) caractere por caractere na ordem da tabela ASCII.if(strcmp(lista[i].prenome, lista[j].prenome) > 0){Pessoa temp = lista[i];
//Se o prenome do índice i vem depois do prenome do índice j na ordem alfabética (por exemplo: "Paulo" depois de "Ana"),
//Então, os dois nomes estão fora de ordem e devem ser trocados.
//Pessoa temp = lista[i];
//lista[i] = lista[j];
//lista[j] = temp;
