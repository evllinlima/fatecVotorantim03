
#include<stdio.h>
#include<stdlib.h>

// Expressões Reduzidas (com Valores Constantes)

main()
{
    // Definição de variáveis
	
    int num1 = 100, num2;
    float valor = 87.5;
    
    char pausa;
    
    printf("\n<< Teste Expressões Reduzidas >>");
    
    num1 += 8;	
    printf("\n\n num1 = %d ",num1);

    scanf("%c",&pausa);

	valor -=2.5;    
	printf("\n\n valor = %.2f ",valor);
	
	scanf("%c",&pausa);
		
	num1 *= 4;
	printf("\n\n num1 = %d ",num1);
	
	scanf("%c",&pausa);
	
	valor /=7;    
	printf("\n\n valor = %.2f ",valor);
	
	scanf("%c",&pausa);

    num2 = num1;
    num2 /= 5;
	printf("\n\n num2 = %d ",num2);
	
	num1 %= 5;
	printf("\n\n num1 (resto) = %d ",num1);
	
	scanf("%c",&pausa);
			    
    printf("\n");
    
    return 0;
}
