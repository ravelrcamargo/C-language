#include <stdio.h>
#include <string.h>

int main() {
    char nome[50], endereco[100], telefone[20];
    int idade;

    // Coleta de dados
    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0'; // Remove o \n do final

    printf("Digite seu endereco: ");
    fgets(endereco, sizeof(endereco), stdin);
    endereco[strcspn(endereco, "\n")] = '\0';

    printf("Digite seu telefone: ");
    fgets(telefone, sizeof(telefone), stdin);
    telefone[strcspn(telefone, "\n")] = '\0';

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    // Impressão formatada
    printf("\nSeu nome é %s, você tem %d anos, mora na rua %s e seu telefone é %s.\n",
           nome, idade, endereco, telefone);

    return 0;
}
