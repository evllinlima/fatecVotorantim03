#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// Aula 04 - Exemplo 8/3 - Usando operadores relacionais e lógicos

main()

{
	setlocale(LC_ALL,"Portuguese");				// Mostra strings com acentos
	
	// definição de variáveis
	
    float Valor_Item, Val_Total;
	int Qtde_Item;

	system("cls");						// limpa a tela	
	printf("\n<< Testes usando Operadores Relacionais e Lógicos - Dev-C++ >>");
	
	Qtde_Item = 150;
	Valor_Item = 45.00;
	Val_Total = 0.00; 
	
	if (!(Valor_Item != 0.00) &&  Qtde_Item != 0 || Val_Total != 0) 
          printf("\n\n Será executado o Comando 1.");
    else
           printf("\n\n Será executado o Comando 2.");
 	
    printf("\n\n");
    return 0;
}
