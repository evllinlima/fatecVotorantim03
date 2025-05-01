#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <iomanip>
#include <clocale>



// Grupo 10: Jo�o Alberto; Lucas Gomes; Evellin Jacinto

using namespace std;

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	system("cls");				// Limpeza inicial de Tela
	
	
    const double precoChopp = 8.00;
    const double precoPizza = 32.00;
    const double precoCobertura = 6.00;
    const double percentualGorjeta = 0.10;

    unsigned int numeroMesa;
    unsigned int numeroChopps, numeroPizzas, numeroCoberturas, numeroPessoas;
    double totalChopps, totalPizzas, totalCoberturas;
    double totalSemGorjeta, totalComGorjeta, gorjeta, valorPorPessoa;
    double percentualDesconto = 0.0, valorDesconto = 0.0, valorFinal;
    
    // Vetor para armazenar o total de cada mesa
    double faturamentoMesas[10] = {0};

    double totalDia = 0;  // Total faturamento
    unsigned int numeroMesasFaturadas = 0;  // contador de mesas faturadas

    do {
        puts(">>>> Calcule o fechamento da conta <<<<");
        
        do {
            printf("Informe o numero da mesa (1 a 10, 0 para encerrar): ");
            scanf("%u", &numeroMesa);

            if (numeroMesa == 0) {
                break;  // Encerra o programa se o numero da mesa for 0
            }
            if (numeroMesa > 10) {
                printf("Numero da mesa invalido! Informe um numero de mesa entre 1 e 10.\n");
            }
        } while (numeroMesa > 10);

        if (numeroMesa == 0) {
            break;
        }

        printf("Informe a quantidade de chopps pedidos:............ ");
        scanf("%u", &numeroChopps);

        // Valida a qtd de pizzas e coberturas pedidas
        printf("Informe quantas pizzas foram pedidas:.............. ");
        scanf("%u", &numeroPizzas);
        
        printf("Informe quantas coberturas foram pedidas:.......... ");
        scanf("%u", &numeroCoberturas);
        
        if (numeroPizzas == 0 && numeroCoberturas > 0) {
            printf("Erro: Nao e possivel pedir coberturas sem pizzas. \nInforme a quantidade de pizzas.....................");
            scanf("%u", &numeroPizzas);
            
        }
		
		if (numeroPizzas > 0 && numeroCoberturas == 0) {
                	printf("Erro: Coberturas sao necessárias para pizzas.Informe a cobertura. \n");
                	printf("Informe quantas coberturas foram pedidas:........ ");
            		scanf("%u", &numeroCoberturas);  
            	}
        

        // Solicita e valida a qtd de pessoas na mesa
        do {
            printf("Informe quantas pessoas estavam na mesa:........... ");
            scanf("%u", &numeroPessoas);

            if (numeroPessoas == 0) {
                printf("Erro: A quantidade de pessoas deve ser maior que zero. Informe a quantidade de pessoas.\n");
            }
        } while (numeroPessoas == 0);

        // calculando os valores da conta
        totalChopps = numeroChopps * precoChopp;
        totalPizzas = numeroPizzas * precoPizza + numeroCoberturas * precoCobertura;
        totalSemGorjeta = totalChopps + totalPizzas;
        gorjeta = totalSemGorjeta * percentualGorjeta;
        totalComGorjeta = totalSemGorjeta + gorjeta;

        // desconto
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

        // acumulando o valor pago por mesa no vetor de faturamento
        faturamentoMesas[numeroMesa - 1] += valorFinal;
        totalDia += valorFinal;
        numeroMesasFaturadas++;

        system("cls"); // Limpar a tela

        printf(">>>> Fechamento da Conta - Mesa %u <<<<\n", numeroMesa);
        
        // saída de dados
        printf("Valor da Conta sem a gorjeta:................... R$ %.2f\n", totalSemGorjeta);
        printf("Porcentagem da Gorjeta:......................... %.1f%%\n", percentualGorjeta * 100);
        printf("Valor da Gorjeta:............................... R$ %.2f\n", gorjeta);
        printf("Valor da Conta com a gorjeta:................... R$ %.2f\n", totalComGorjeta);
        printf("Porcentagem do Desconto:........................ %.1f%%\n", percentualDesconto);
        printf("Valor do Desconto:.............................. R$ %.2f\n", valorDesconto);
        printf("Valor Total a Pagar:............................ R$ %.2f\n", valorFinal);
        printf("Valor a pagar por pessoa:....................... R$ %.2f\n", valorPorPessoa);
        
        system ("pause");

        // Pausa antes de reiniciar o programa
        printf("\nPressione Enter para continuar...\n");
        system("cls"); // Limpar a tela
        
    } while (numeroMesa != 0);

    // fim do programa, exibe o faturamento total e médio
    if (numeroMesasFaturadas == 0) {
        printf("\nNao houve faturamento no dia.\n");
    } else {
        double mediaFaturamento = totalDia / numeroMesasFaturadas;
        
        printf("\n>>>>>>>> Pizzaria AlForno <<<<<<<<<");
        printf("\n>>>> Fechamento do Faturamento <<<<\n");
        
        // Mostra o faturamento por mesa
        for (int i = 0; i < 10; i++) {
            printf("Mesa 0%d: R$ %.2f\n", i + 1, faturamentoMesas[i]);
        }

        printf("\nTotal Faturado no Dia........: R$ %.2f\n", totalDia);
        printf("Media de Faturamento por Mesa: R$ %.2f\n", mediaFaturamento);
    }

    return 0;
}
