#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_NOMES 20
#define TAM_NOME 50// sao duas constantes que n�o vao alterar o valor

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

// Fun��o para ordenar nomes por sobrenome
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

// Fun��o que calcula a m�dia de letras por nome completo (sem contar espa�os)
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

        fgets(entrada,sizeof(entrada), stdin);//aonde vai colocar a entrada, o tamanho e stdin vai ler do teclado Isso � melhor que scanf("%s", ...) porque scanf para no espa�o.

        entrada[strcspn(entrada, "\n")] = '\0';//string complement span (n�mero de caracteres at� encontrar algo)Muito usado para remover o \n que o fgets() pega no final. remove o \n do final, caso o usu�rio d� Enter. strcspn retorna a posi��o do \n, e o \0 "corta" a string ali.

        if(strcmp(entrada, "FIM")==0) //retorna 0 se forem iguais.// O break interrompe o while.
        {
            break;
        }
        //total � zero e igual um for
        sscanf(entrada,"%s" "%s", lista[total].prenome, lista[total].sobrenome);//sscanf quebra a entrada em duas palavras, separadas por espa�o, e guarda nas posi��es prenome e sobrenome da estrutura lista[total].Se o nome for composto (ex: "Maria Clara Rocha"), ele s� vai pegar "Maria" e "Clara" � o resto � ignorado.
        total++;
    }

    ordenarPorPrenome(lista, total);
    printf("\nOrdem alfabetica por prenome:\n");
    for (int i = 0; i < total; i++) {
        printf("%s %s\n", lista[i].prenome, lista[i].sobrenome);
    }

    // ETAPA 3: Ordenar por sobrenome
    ordenarPorSobrenome(lista, total);
    printf("\nNomes em ordem alfab�tica por sobrenome:\n");
    for (int i = 0; i < total; i++) {
        printf("%s %s\n", lista[i].prenome, lista[i].sobrenome);
    }

    // ETAPA 4: Calcular m�dia de letras
    float media = calcularMediaLetras(lista, total);
    printf("\nM�dia de letras por nome: %.2f\n", media);


    return 0;
}
//PASSO A PASSO
//1 primeiro crie uma estrutura parecida com uma classe java com o nome Pessoa
//2 se quiser pode criar constante para os tamanhos permitidos
//3 crie um array de pessoas com o nome lista cada espa�o armazena duas respostas
//4 fazer um while com a condi��o de parada para incluir os nomes e sobrenomes
//4.1char entrada[100]; para armazenar tempoririamente as infroma��es
//5 fgets(entrada,sizeof(entrada), stdin); // isso e bom porque le os espa�os
//6entrada[strcspn(entrada, "\n")] = '\0';// tira os espa�os para n�o dar bug
//7  if(strcmp(entrada, "FIM")==0) vai comparar se o digitado foi fim se for sai
//8 sscanf(entrada,"%s" "%s", lista[total].prenome, lista[total].sobrenome);//sscanf quebra a entrada em duas palavras,
//separadas por espa�o, e guarda nas posi��es prenome e sobrenome da estrutura lista[total].Se o nome for composto
//(ex: "Maria Clara Rocha"), ele s� vai pegar "Maria" e "Clara" � o resto � ignorado.
//9 total ++ vai ir mudando a posi��o da lista pessoas
//10  ordenarPorPrenome(lista, total); chama a fun��o para orgazinar os prenomes
//11  ordenarPorSobrenome(lista, total); chama a fun��o para organizar os sobrenomes
//12 chama a fun��o para calcular a media
//13 void ordenarPorPrenome(Pessoa lista[], int total)as duas fun��es s�o bem iguais fazem a mesma coisa so que uma vai na lista[i].prenome
//e a outra vai no lista[i].sobrenome
//14 No �ltimo elemento (�ndice total - 1), n�o h� mais ningu�m � frente para comparar. Exemplo: se total = 5, os �ndices v�o de 0 a 4. No �ndice 4, voc� n�o precisa comparar com ningu�m.
//15Ele come�a em i + 1 porque:
//N�o faz sentido comparar um elemento com ele mesmo (ex: i == j).usando o bubble sort
//16 A fun��o strcmp(a, b):Compara duas strings (a e b) caractere por caractere na ordem da tabela ASCII.if(strcmp(lista[i].prenome, lista[j].prenome) > 0){Pessoa temp = lista[i];
//Se o prenome do �ndice i vem depois do prenome do �ndice j na ordem alfab�tica (por exemplo: "Paulo" depois de "Ana"),
//Ent�o, os dois nomes est�o fora de ordem e devem ser trocados.
//Pessoa temp = lista[i];
//lista[i] = lista[j];
//lista[j] = temp;
