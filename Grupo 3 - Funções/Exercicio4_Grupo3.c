#include <stdio.h>
#include <stdlib.h>

// Declaração das funções que serão usadas
double metodoPagamentoAVista(double gastos);
double metodoPagamentoDuasVezes(double gastos);
double metodoPagamentoParcelado(double gastos);

// Função que escolhe a opção de pagamento
double opcaoEscolhida(int opcao, double gastos) {
    if (gastos < 0) {
        printf("Valor inválido. O valor não pode ser negativo.\n");
        return -1; // Retorna -1 para indicar erro
    }

    // Verifica a opção escolhida e chama a função correspondente
    if(opcao == 1){
        return metodoPagamentoAVista(gastos);
    } else if(opcao == 2){
        return metodoPagamentoDuasVezes(gastos);
    } else if(opcao == 3){
        return metodoPagamentoParcelado(gastos);
    } else {
        printf("Opção inválida.\n");
        return -1; // Retorna -1 se a opção for inválida
    }
}

// Função para pagamento à vista
double metodoPagamentoAVista(double gastos) {
    printf("À vista você tem 10%% de desconto\n");
    return gastos - (gastos * 0.10);
}

// Função para pagamento em duas vezes
double metodoPagamentoDuasVezes(double gastos) {
    printf("Em duas vezes você paga o preço da etiqueta\n");
    return gastos;
}

// Função para pagamento parcelado com juros
double metodoPagamentoParcelado(double gastos) {
    int parcelas = 0;

    // Solicita ao usuário o número de parcelas
    printf("Quantas parcelas deseja (3 a 10)? Com 3%% de juros ao mês: ");
    scanf("%d", &parcelas);

    // Verifica se o número de parcelas está no intervalo permitido
    if (parcelas < 3 || parcelas > 10) {
        printf("Número de parcelas inválido! O número de parcelas deve estar entre 3 e 10.\n");
        return -1; // Retorna -1 para indicar erro
    }

    // Aplica o juros de 3% por parcela
    return gastos + (gastos * (parcelas * 0.03)); // Corrige o cálculo dos juros
}

int main() {
    int opcao;
    double gastos;

    printf("Qual foi o total de gastos do cliente: ");
    scanf("%lf", &gastos);

    printf("Escolha uma opcao para realizar o pagamento:\n ");
    printf("1-Pagamento à Vista\n 2-Em duas vezes\n 3-De 3 a 10 vezes:\n");
    scanf("%d", &opcao);

    double valorFinal = opcaoEscolhida(opcao, gastos);

    if (valorFinal != -1) {
        printf("O valor final a pagar será: R$ %.2f\n", valorFinal);
    }

    return 0;
}
