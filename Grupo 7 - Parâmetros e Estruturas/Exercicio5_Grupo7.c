#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct
{
    char nome[30];
    char endereco[100];
    char fone[10];
    long int cep;
} Pessoa;

#define MAX_CONTATOS 100
Pessoa lista[MAX_CONTATOS];
int totalContatos =0;

void agenda()//ponteiro que vai alterar direto na struct
{
    int opcao = 0;
    do
    {

        printf("Digite sua opcao para a  agenda:\n"
               "1- Entrar um novo nome na agenda:\n"
               "2- Imprimir na tela os dados de uma das pessoas cadastradas (conforme solicitação).\n"
               "3- Imprimir a lista de nomes cadastrados que comecem pela letra indicada.\n"
               "4- Fim: ");
        scanf(" %d", &opcao);
        while(opcao != 1 && opcao != 2 && opcao !=3 && opcao != 4)
        {
            printf("Opcao invalida digite novamente sua opcao (1-2-3-4): ");
            scanf(" %d", &opcao);
        }

        switch(opcao)
        {
        case 1:
            adicionarPessoa();
            break;
        case 2:
            imprimirDados();
            break;
        case 3:
            imprimirNome();
            break;
        case 4:
            printf("Finalizando programa");
            break;
        default:
            printf("Opcao invalida!\n");
            break;
        }
    }
    while(opcao != 4);
}

void adicionarPessoa()
{
    if(totalContatos >= MAX_CONTATOS)
    {
        printf("Agenda cheia\n");
        return;
    }
//O %[^\n] significa:
//"Ler tudo até encontrar uma nova linha (\n)".
//Ou seja, ele vai capturar frases inteiras com espaços até a tecla Enter ser pressionada.
    printf("Digite o nome: ");
    scanf(" %[^\n]", lista[totalContatos].nome);

    printf("Digite o endereco: ");
    scanf(" %[^\n]", lista[totalContatos].endereco);

    printf("Digite o telefone: ");
    scanf(" %[^\n]", lista[totalContatos].fone);

    printf("Digite o CEP: ");
    scanf(" %ld", &lista[totalContatos].cep);

    totalContatos++;
    printf("Pessoa adicionada com sucesso!\n");
}
void imprimirDados()
{
    char nomeBusca[30];
    printf("Digite o nome a ser buscado: ");
    scanf(" %[^\n]", nomeBusca);

    for(int i = 0; i < totalContatos; i++)
    {
        if(strcmp(lista[i].nome, nomeBusca)==0)
        {
            printf("Nome: %s\nEndereco: %s\nTelefone: %s\ncep: %ld\n",
                   lista[i].nome, lista[i].endereco, lista[i].fone, lista[i].cep);
            return;
        }
    }
    printf("Pessoa nao encontrada.\n");
}
void imprimirNome()
{
    char letra;
    printf("Digite a letra inicial: ");
    scanf(" %c", &letra);
    letra = toupper(letra);//deixa em maiuscula para não ter erros

    printf("Contatos que começam com '%c':\n", letra);
    for (int i = 0; i < totalContatos; i++)
    {
        if (toupper(lista[i].nome[0]) == letra)
        {
            printf("%s\n", lista[i].nome);
        }
    }
}

//Construir um programa em "C" que implementa uma agenda eletrônica. O programa deve ter um menu com as seguintes opções:

//Entrar um novo nome na agenda.
//Imprimir na tela os dados de uma das pessoas cadastradas (conforme solicitação).
//Imprimir a lista de nomes cadastrados que comecem pela letra indicada.
//Fim
int main()
{

    agenda();

    return 0;
}
