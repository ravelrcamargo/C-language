#include <stdio.h>
#include <stdlib.h>

// Declara��o das fun��es que ser�o usadas
double metodoPagamentoAVista(double gastos);
double metodoPagamentoDuasVezes(double gastos);
double metodoPagamentoParcelado(double gastos);

// Fun��o que escolhe a op��o de pagamento
double opcaoEscolhida(int opcao, double gastos) {
    if (gastos < 0) {
        printf("Valor inv�lido. O valor n�o pode ser negativo.\n");
        return -1; // Retorna -1 para indicar erro
    }

    // Verifica a op��o escolhida e chama a fun��o correspondente
    if(opcao == 1){
        return metodoPagamentoAVista(gastos);
    } else if(opcao == 2){
        return metodoPagamentoDuasVezes(gastos);
    } else if(opcao == 3){
        return metodoPagamentoParcelado(gastos);
    } else {
        printf("Op��o inv�lida.\n");
        return -1; // Retorna -1 se a op��o for inv�lida
    }
}

// Fun��o para pagamento � vista
double metodoPagamentoAVista(double gastos) {
    printf("� vista voc� tem 10%% de desconto\n");
    return gastos - (gastos * 0.10);
}

// Fun��o para pagamento em duas vezes
double metodoPagamentoDuasVezes(double gastos) {
    printf("Em duas vezes voc� paga o pre�o da etiqueta\n");
    return gastos;
}

// Fun��o para pagamento parcelado com juros
double metodoPagamentoParcelado(double gastos) {
    int parcelas = 0;

    // Solicita ao usu�rio o n�mero de parcelas
    printf("Quantas parcelas deseja (3 a 10)? Com 3%% de juros ao m�s: ");
    scanf("%d", &parcelas);

    // Verifica se o n�mero de parcelas est� no intervalo permitido
    if (parcelas < 3 || parcelas > 10) {
        printf("N�mero de parcelas inv�lido! O n�mero de parcelas deve estar entre 3 e 10.\n");
        return -1; // Retorna -1 para indicar erro
    }

    // Aplica o juros de 3% por parcela
    return gastos + (gastos * (parcelas * 0.03)); // Corrige o c�lculo dos juros
}

int main() {
    int opcao;
    double gastos;

    printf("Qual foi o total de gastos do cliente: ");
    scanf("%lf", &gastos);

    printf("Escolha uma opcao para realizar o pagamento:\n ");
    printf("1-Pagamento � Vista\n 2-Em duas vezes\n 3-De 3 a 10 vezes:\n");
    scanf("%d", &opcao);

    double valorFinal = opcaoEscolhida(opcao, gastos);

    if (valorFinal != -1) {
        printf("O valor final a pagar ser�: R$ %.2f\n", valorFinal);
    }

    return 0;
}
