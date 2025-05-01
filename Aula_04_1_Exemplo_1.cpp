#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// Soma e Subtração (Prioridade de operadores)

main()
{
	setlocale(LC_ALL,"Portuguese");
	
    // Definição de variáveis
	
    int   numero = 120; 
	float valor1 = 389;				// 389.000000
	float valor2 = 756.58769;
	float resultado;
	
    printf("\n << Soma e Multiplicação >>");

    printf("\n\n Numero = %i",numero);
    printf("\n valor1 = %.3f",valor1);
	printf("\n valor2 = %.3f",valor2);
	
	resultado = valor1 + valor2 * -numero;
	printf("\n\n valor1 + valor2 * -numero = %.2f",resultado);
	
	resultado = (valor1 + valor2) * -numero;
	printf("\n\n (valor1 + valor2) * -numero = %.2f",resultado);
	
	resultado = valor1 - valor2 / numero;	
	printf("\n\n valor1 - valor2 / numero = %.2f",resultado);
	
	resultado = (valor1 - valor2) / numero;
	printf("\n\n (valor1 - valor2) / numero = %.2f",resultado);
	
    printf("\n");

    return 0;
}
