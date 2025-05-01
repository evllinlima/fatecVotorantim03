#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

// Usando operadores relacionais com string

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	// definição de variáveis
		
    char nome1[5], nome2[5], pausa;	
    
    bool resultado;
      
	printf("\n<< Testes usando Operadores Relacionais - Dev-C++ >>");
     
    strcpy(nome1,"PAULO");
    strcpy(nome2,"PAULO");
   
	resultado = strcmp(nome1,nome2); 
	
	printf("\n\n %s == %s - %d",nome1,nome2,resultado);
	        
    scanf("%c",&pausa); 
/* ----------------------*/	
	      
	strcpy(nome1,"PaULO");    
			
    resultado = strcmp(nome1,nome2); 
	  
	printf("\n\n %s == %s - %d",nome1,nome2,resultado);

    scanf("%c",&pausa); 
/* ----------------------*/	   
	    
    printf("\n");

    return 0;
}
