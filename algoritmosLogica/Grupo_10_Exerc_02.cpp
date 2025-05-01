#include <iostream>
#include <cstdio> // Para usar printf e scanf

using namespace std;

int main() {
    // Declaração de variáveis
    unsigned int numeroChopps, numeroPizzas, numeroCoberturas, numeroPessoas;
   
    
    //variáveis de conta
    float valorSemGorjeta, valorComGorjeta, valorDaGorjeta, valorPorPessoa, valorComDesconto;
    float valorConDesconto, valorDesconto, percDesconto;
    
    //constantes
    const float precoChopp = 8.00;	
    const float precoPizza = 32.00;
    const float precoCobertura = 6.00;    
    const unsigned int percGorjeta = 10; 
    

    // Entrada de dados
    puts(">> Calcule o fechamento da conta <<");
    printf("Informe a quantidade de chopps foram pedidos: ");
    scanf("%u", &numeroChopps);
    
    valorSemGorjeta = numeroChopps * precoChopp;
    
    printf("Informe quantas pizzas foram pedidas: ");
    scanf("%u", &numeroPizzas);
    
    valorSemGorjeta =  valorSemGorjeta + numeroPizzas * precoPizza;

    printf("Informe quantas coberturas foram pedidas: ");
    scanf("%u", &numeroCoberturas);
    
    valorSemGorjeta = valorSemGorjeta + numeroCoberturas * precoCobertura;

    printf("Informe quantas pessoas estavam na mesa: ");
    scanf("%u", &numeroPessoas);

    // Cálculo do total da conta
    
    valorDaGorjeta = (valorSemGorjeta * percGorjeta) / 100;
    
    valorComGorjeta = valorSemGorjeta + valorDaGorjeta;
    
    
    if (valorComGorjeta < 300){
    	percDesconto = 5.2;
    	valorComDesconto = valorComGorjeta - valorComGorjeta * (percDesconto / 100);
    	valorDesconto = valorComGorjeta - valorComDesconto;
    	valorPorPessoa = valorComDesconto / numeroPessoas;
	}else{
		if (valorComGorjeta <= 600){
			percDesconto = 8;
    		valorComDesconto = valorComGorjeta - valorComGorjeta * (percDesconto / 100);
    		valorDesconto = valorComGorjeta - valorComDesconto;
    		valorPorPessoa = valorComDesconto / numeroPessoas;
		}else{
			percDesconto = 10;
    		valorComDesconto = valorComGorjeta - valorComGorjeta * (percDesconto / 100);
    		valorDesconto = valorComGorjeta - valorComDesconto;
    		valorPorPessoa = valorComDesconto / numeroPessoas;
		}
	}

    // Saída de dados
    printf("\n Detalhes do pedido: ");
    printf(" \n Valor da Conta sem a gorjeta: R$ %.2f \n", valorSemGorjeta);
    printf(" Percentual da Gorjeta:  %u %% \n", percGorjeta);
    printf(" Valor da Gorjeta: R$ %.2f \n", valorDaGorjeta);
    printf(" Valor Com gorjeta: R$ %.2f \n", valorComGorjeta);
    printf(" Percentual de desconto:  %.2f %% \n", percDesconto);
	printf(" Valor do desconto: R$ %.2f \n", valorDesconto);
	printf(" Valor total: R$ %.2f \n", valorComDesconto);    
    printf(" Valor a pagar por pessoa: R$ %.2f \n", valorPorPessoa);

    return 0;
}


