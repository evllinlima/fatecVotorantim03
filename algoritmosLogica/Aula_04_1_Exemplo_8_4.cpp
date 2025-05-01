#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

// Aula 04 - Exemplo 8/4 - Usando operadores relacionais e lógicos

main()

{
	setlocale(LC_ALL,"Portuguese");				// Mostra strings com acentos
	
	// definição de variáveis
	
    char Nome_Cliente[20], Sigla_Estado[3];
	
	system("cls");						// limpa a tela	
	printf("\n<< Testes usando Operadores Relacionais e Lógicos - Dev-C++ >>");
	
	strcpy(Nome_Cliente,"pedro");  
	strcpy(Sigla_Estado,"SP");
	
	if (strcmp(Nome_Cliente,"Pedro" ) == 0  && strcmp(Sigla_Estado, "SP") == 0)   
           printf("\n\n Será executado o Comando 1.");
  	else
           printf("\n\n Será executado o Comando 2.");
	
    printf("\n\n");
    return 0;
}
