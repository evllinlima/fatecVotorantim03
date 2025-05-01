#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// Multiplicação e Divisão

main()
{
	
	setlocale(LC_ALL,"Portuguese");
	
	// definição de variáveis
	
    int numero, dobro, numero2, resultado;    
    
    puts("\n<< Calcular o dobro de um numero informado >>");
	
    printf("\n\n Digite um Numero: ");
    fflush(stdin);
    scanf("%d",&numero);

    dobro = numero * 2;					// Cálculo simples

    printf("\n O dobro de %d é %d \n\n", numero, dobro);
    
    system("pause");
    system("cls");

 	puts("\n<< Calcular e mostrar Quociente e Resto de Divisão >>");
 	
 	numero  = 27;
 	numero2 = 6;
 	
 	printf("\n\n numero  = %d",numero);
	printf("\n numero2 = %d",numero2);
	
	resultado = numero / numero2; 
	printf("\n\n Quociente de: numero / numero2 = %d",resultado);
	
	resultado = numero % numero2;  
	printf("\n\n Resto de: numero %% numero2 = %d \n\n",resultado);  
	
	system("pause & cls");
	
 	puts("\n<< Calcular e mostrar Quociente e Resto de Divisão >>");
 	
	numero  = 21;
 	numero2 = 7;
 	
 	printf("\n\n numero  = %d",numero);
	printf("\n numero2 = %d",numero2);
	 
	printf("\n\n Quociente de: numero / numero2 = %d",21 / 7);  
	printf("\n\n Resto de: numero %% numero2 = %d \n\n",21 % 7);  

    return 0;
}
