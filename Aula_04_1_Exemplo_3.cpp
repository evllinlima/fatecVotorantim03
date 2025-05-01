#include<stdio.h>
#include<stdlib.h>
#include<locale>
#include<math.h>

// Exponenciação - Elevar um número qualquer informado, a uma potência informada.

main()

{

	setlocale(LC_ALL,"Portuguese");
	
	// definição de variáveis
	
    int base, potencia, resultado;
	
    printf("\n<< Exponenciação de um Número em C++ >>");
 
 	printf("\n\n Informe um Número..............: ");
 	fflush(stdin);
 	scanf("%d",&base);
 	
	printf("\n\n Deseja elevar a qual potencia?.: ");
	fflush(stdin);
 	scanf("%d",&potencia);
	
    resultado = pow(base,potencia);         
	
	printf("\n\n Número %d elevado a potencia %d = %d",base, potencia, resultado);
	
	printf("\n\n Número %d elevado a potencia %d = %.4f",base, potencia, pow(base,potencia));   
	
    printf("\n\n");

    return 0;
}
