#include<stdio.h>
#include<stdlib.h>
	// Aula 03 - Exercício de Fixação 1: Algoritmo para cálculo de reajuste salarial
	int main()

	{
	// Declaração de variáveis
	 float sal_atual, val_reaj, sal_reajustado;
 
	// Declaração de constantes
 	const float perc_reajuste = 12.28;
	puts("\n<< Empresa TechInfo - Calculo do Reajuste Salarial >>");
	// Entrada de Dados
 	printf("\n\n Informe o valor do salário atual.....: ");
 	scanf("%f",&sal_atual);
 
	// Processamento de Cálculos
 	val_reaj = sal_atual * (perc_reajuste / 100);
 
	sal_reajustado = sal_atual + val_reaj;
 
	// Saida de dados do Reajuste Salarial
	system("cls");
	puts("\n<< Empresa TechInfo - Calculo do Reajuste Salarial >>");
	printf("\n Salario Atual......R$ %8.2f",sal_atual);
	printf("\n Valor do Reajuste..R$ %8.2f",val_reaj);
	printf("\n Salario Reajustado.R$ %8.2f",sal_reajustado);
	printf("\n\n");
	return 0;
}
