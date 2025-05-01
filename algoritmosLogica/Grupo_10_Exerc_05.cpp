#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <iomanip>
#include <clocale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    system("cls");  // Limpeza inicial de Tela

    const double precoChopp = 8.00;
    const double precoPizza = 32.00;
    const double precoCobertura = 6.00;

    unsigned int numeroMesa;
    unsigned int numeroChopps, numeroPizzas, numeroCoberturas, numeroPessoas;
    double totalDia = 0;
    unsigned int numeroMesasFaturadas = 0;

    // Matrizes e vetor para registrar os consumos por mesa
    unsigned int consumoPizzas[10] = {0};
    unsigned int consumoCoberturas[10] = {0};
    unsigned int consumoChopps[10] = {0};
    unsigned int pessoasMesas[10] = {0};

    do {
        puts(">>>> Calcule o fechamento da conta <<<<");

        do {
            printf("Informe o número da mesa (1 a 10, 0 para encerrar): ");
            scanf("%u", &numeroMesa);

            if (numeroMesa == 0) {
                break;  // Encerra o programa se o numero da mesa for 0
            }
            if (numeroMesa > 10) {
                printf("Número da mesa inválido! Informe um número de mesa entre 1 e 10.\n");
            }
        } while (numeroMesa > 10);

        if (numeroMesa == 0) {
            break;
        }

        printf("Informe a quantidade de chopps pedidos:............ ");
        scanf("%u", &numeroChopps);

        do {
            printf("Informe quantas pizzas foram pedidas:.............. ");
            scanf("%u", &numeroPizzas);

            if (numeroPizzas == 0) {
                printf("Erro: Não é permitido adicionar coberturas sem pizzas. Por favor, informe pelo menos 1 pizza.\n");
            }
        } while (numeroPizzas == 0);

        do {
            printf("Informe quantas coberturas foram pedidas:.......... ");
            scanf("%u", &numeroCoberturas);

            if (numeroCoberturas < numeroPizzas) {
                printf("Erro: O número de coberturas não pode ser menor que o número de pizzas. Tente novamente.\n");
            }
        } while (numeroCoberturas < numeroPizzas);

        printf("Informe quantas pessoas estavam na mesa:........... ");
        scanf("%u", &numeroPessoas);

        // Acumular os valores para a mesa correspondente
        consumoPizzas[numeroMesa - 1] += numeroPizzas;
        consumoCoberturas[numeroMesa - 1] += numeroCoberturas;
        consumoChopps[numeroMesa - 1] += numeroChopps;
        pessoasMesas[numeroMesa - 1] += numeroPessoas;

        // Calculando o total da conta
        double totalMesa = (numeroPizzas * precoPizza) + (numeroCoberturas * precoCobertura) + (numeroChopps * precoChopp);
        totalDia += totalMesa;
        numeroMesasFaturadas++;

        printf("\n>>> Fechamento da Mesa %u <<<\n", numeroMesa);
        printf("Total da Conta (R$): %.2f\n", totalMesa);
        system("pause");
        system("cls");
    } while (numeroMesa != 0);

    // Exibindo o relatorio final
    printf("\n>>>>>>>> Pizzaria AlForno <<<<<<<<\n");
    printf(">>>> Fechamento do Faturamento <<<<\n");
    printf("\nTabela de Consumo por Mesa:\n");
    printf("--------------------------------------------------------------------\n");
    printf("| Mesa | Pizzas | Coberturas | Chopps | Pessoas |   Total (R$)   |\n");
    printf("--------------------------------------------------------------------\n");

    for (int i = 0; i < 10; i++) {
        double totalMesa = (consumoPizzas[i] * precoPizza) + (consumoCoberturas[i] * precoCobertura) + (consumoChopps[i] * precoChopp);
        printf("|  %2d  |  %6d |     %6d |  %5d |   %6d | %13.2f |\n",
               i + 1, consumoPizzas[i], consumoCoberturas[i], consumoChopps[i], pessoasMesas[i], totalMesa);
    }
    printf("--------------------------------------------------------------------\n");
    printf("Total Faturado no Dia: R$ %.2f\n", totalDia);

    if (numeroMesasFaturadas > 0) {
        double mediaFaturamento = totalDia / numeroMesasFaturadas;
        printf("Média de Faturamento por Mesa: R$ %.2f\n", mediaFaturamento);
    } else {
        printf("Nenhuma mesa faturada no dia.\n");
    }

    return 0;
}

