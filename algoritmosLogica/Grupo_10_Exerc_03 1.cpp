#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main() {
    const double precoChopp = 8.00;
    const double precoPizza = 32.00;
    const double precoCobertura = 6.00;
    const double percentualGorjeta = 0.10;

    unsigned int numeroMesa;
    unsigned int numeroChopps, numeroPizzas, numeroCoberturas, numeroPessoas;
    double totalChopps, totalPizzas, totalCoberturas;
    double totalSemGorjeta, totalComGorjeta, gorjeta, valorPorPessoa;
    double percentualDesconto = 0.0, valorDesconto = 0.0, valorFinal;

    do {
        puts(">>>> Calcule o fechamento da conta <<<<");
		        
        // solicita o numero da mesa
        printf("Informe o numero da mesa (0 para encerrar): ");
        scanf("%u", &numeroMesa);

        // saída do loop caso a mesa for igual 0
        if (numeroMesa == 0) {
            break;
        }

        printf("Informe a quantidade de chopps pedidos: ");
        scanf("%u", &numeroChopps);

        // valida a qtd de pizzas e coberturas pedidas
        do {
            printf("Informe quantas pizzas foram pedidas: ");
            scanf("%u", &numeroPizzas);
            
            printf("Informe quantas coberturas foram pedidas: ");
            scanf("%u", &numeroCoberturas);

            // if para validar as combinações entre pizzas e coberturas pedidas
            if (numeroPizzas == 0 && numeroCoberturas > 0) {
                printf("Erro: Não é possível pedir coberturas sem pizzas. Por favor, informe novamente.");
                
            } else if (numeroPizzas > 0 && numeroCoberturas == 0) {
                printf("Erro: Coberturas são necessárias para pizzas. Por favor, informe novamente.");
            }
            
        } while ((numeroPizzas == 0 && numeroCoberturas > 0) || (numeroPizzas > 0 && numeroCoberturas == 0));

        // solicita e valida a qtd de pessoas na mesa
        do {
            printf("Informe quantas pessoas estavam na mesa: ");
            scanf("%u", &numeroPessoas);

            if (numeroPessoas == 0) {
                printf("Erro: A quantidade de pessoas deve ser maior que zero. Por favor, informe novamente.");
            }
        } while (numeroPessoas == 0);

        // calculando os valores da conta
        totalChopps = numeroChopps * precoChopp;
        totalPizzas = numeroPizzas * precoPizza + numeroCoberturas * precoCobertura;
        totalSemGorjeta = totalChopps + totalPizzas;
        gorjeta = totalSemGorjeta * percentualGorjeta;
        totalComGorjeta = totalSemGorjeta + gorjeta;

        // aplicando o desconto
        if (totalComGorjeta <= 300.00) {
            percentualDesconto = 5.2;
        } else if (totalComGorjeta <= 600.00) {
            percentualDesconto = 8.0;
        } else {
            percentualDesconto = 10.0;
        }

        valorDesconto = totalComGorjeta * (percentualDesconto / 100);
        valorFinal = totalComGorjeta - valorDesconto;
        valorPorPessoa = valorFinal / numeroPessoas;

        system("cls"); // Limpar a tela

        printf(">>>> Fechamento da Conta - Mesa %u <<<<\n", numeroMesa);
        
        // saída de dados
        printf("Valor da Conta sem a gorjeta: R$ %.2f\n", totalSemGorjeta);
        printf("Porcentagem da Gorjeta: %.1f%%\n",percentualGorjeta * 100);
        printf("Valor da Gorjeta: R$ %.2f\n", gorjeta);
        printf("Valor da Conta com a gorjeta: R$ %.2f\n", totalComGorjeta);
        printf("Porcentagem do Desconto: %.1f%%\n", percentualDesconto);
        printf("Valor do Desconto: R$ %.2f\n", valorDesconto);
        printf("Valor Total a Pagar: R$ %.2f\n", valorFinal);
        printf("Valor a pagar por pessoa: R$ %.2f\n", valorPorPessoa);

        // pausa antes de reiniciar o programa
        printf("\nPressione Enter para continuar...\n");

    } while (true);

    return 0;
}

