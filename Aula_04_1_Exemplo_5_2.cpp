

#include<stdio.h>
#include<stdlib.h>

// Expressões Reduzidas (com Variáveis)

main()
{
    // Definição de variáveis
	
    int num1 = 100, num2 = 200, num3 = 8, num4 = 7;
    
    float valor1 = 87.5, valor2= 4.5;
    
    char pausa;
    
    printf("\n<< Teste Expressões Reduzidas >>");
    
    num1 += num2;					// num1 = num1 + num2;
    printf("\n\n num1 = %d ",num1);
    
    scanf("%c",&pausa);

	valor1 -= valor2;    
	printf("\n\n valor1 = %.2f ",valor1);
	
	scanf("%c",&pausa);
		
	num1 *= num3;
	printf("\n\n num1 = %d ",num1);
	
	scanf("%c",&pausa);
	
	valor1 /= num3;    
	printf("\n\n valor1 = %.2f ",valor1);

	num1 %= num4;
	printf("\n\n num1 (resto) = %d ",num1);
	
	scanf("%c",&pausa);
			    
    printf("\n");
    
    return 0;
}
