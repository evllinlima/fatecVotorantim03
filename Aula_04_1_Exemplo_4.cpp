
#include<stdio.h>
#include<stdlib.h>

// Exemplos de Operadores de Incremento/Decremento

main()
{
    // Definição de variáveis
	
    int num1, resultado;
    
    char pausa;
		
    printf("\n << Operadores de Incremento e Decremento >>");
    
    num1 = 120;
    printf("\n\n num1 = %d ",num1);
    printf("\n Resultado ++num1 = %d ",++num1);
    printf("\n num1 = %d ",num1);

	scanf("%c",&pausa);

    num1 = 120;
    printf("\n\n num1 = %d ",num1);
    printf("\n Resultado num1++ = %d",num1++);
	printf("\n num1 = %d ",num1);
	
	scanf("%c",&pausa);
	
    num1 = 120;
    printf("\n\n num1 = %d ",num1);
    printf("\n Resultado --num1 %d ",--num1);
	printf("\n num1 = %d ",num1);
	
	printf("\n\n");
	system("pause");
	
    num1 = 120;
    printf("\n\n num1 = %d ",num1);
    printf("\n Resultado num1-- = %d",num1--);
    printf("\n num1 = %d ",num1);
	 
    printf("\n\n");
    
    return 0;
}
