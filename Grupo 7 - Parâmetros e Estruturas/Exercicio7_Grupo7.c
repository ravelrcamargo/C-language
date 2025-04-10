#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_CONTATOS 100

typedef struct {
    char nome[50];
    char endereco[100];
    char telefone[15];
} Pessoa;

Pessoa agenda[MAX_CONTATOS];
int totalContatos = 0;

void adicionarContato() {
    if (totalContatos >= MAX_CONTATOS) {
        printf("Agenda cheia!\n");
        return;
    }

    printf("Digite o nome: ");
    scanf(" %[^\n]", agenda[totalContatos].nome);

    printf("Digite o endereco: ");
    scanf(" %[^\n]", agenda[totalContatos].endereco);

    printf("Digite o telefone: ");
    scanf(" %[^\n]", agenda[totalContatos].telefone);

    totalContatos++;
    printf("Contato adicionado com sucesso!\n\n");
}

void consultarContatoPorNome() {
    char nomeBusca[50];
    printf("Digite o nome para buscar: ");
    scanf(" %[^\n]", nomeBusca);

    for (int i = 0; i < totalContatos; i++) {
        if (strcmp(agenda[i].nome, nomeBusca) == 0) {
            printf("\nNome: %s\nEndereço: %s\nTelefone: %s\n\n",
                   agenda[i].nome, agenda[i].endereco, agenda[i].telefone);
            return;
        }
    }
    printf("Contato não encontrado.\n\n");
}

void imprimirPorLetraInicial() {
    char letra;
    printf("Digite a letra inicial: ");
    scanf(" %c", &letra);
    letra = toupper(letra);

    printf("\nContatos que começam com '%c':\n", letra);
    int encontrados = 0;
    for (int i = 0; i < totalContatos; i++) {
        if (toupper(agenda[i].nome[0]) == letra) {
            printf("%s\n", agenda[i].nome);
            encontrados++;
        }
    }
    if (encontrados == 0) {
        printf("Nenhum contato encontrado com essa letra.\n");
    }
    printf("\n");
}

int main() {
    int opcao;

    do {
        printf("=== AGENDA ELETRÔNICA ===\n");
        printf("1 - Entrar um nome na agenda\n");
        printf("2 - Consultar contato por nome\n");
        printf("3 - Imprimir nomes pela letra inicial\n");
        printf("4 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                adicionarContato();
                break;
            case 2:
                consultarContatoPorNome();
                break;
            case 3:
                imprimirPorLetraInicial();
                break;
            case 4:
                printf("Saindo da agenda...\n");
                break;
            default:
                printf("Opção inválida!\n\n");
        }

    } while (opcao != 4);

    return 0;
}
