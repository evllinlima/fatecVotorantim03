#include<stdio.h>
#include<stdlib.h>

// Usando operadores relacionais

main()
{
	// definição de variáveis
	
    int num1, num2;
    bool resultado;			// 1 = verdade	0 = falso

	char verdade[10] = "Verdade", falso[10] = "Falso", pausa;
	
    printf("\n<< Testes usando Operadores Relacionais - Dev-C++ >>");

    num1 = 358;
    num2 = 75;

    resultado = num1 == num2;
    
    printf("\n\n Conteúdo de num1 e num2 - %d e %d",num1,num2);
    printf("\n\n num1 == num2 - resultado = %d",resultado);
          
	scanf("%c",&pausa);    
/* -------------------------*/

    resultado = num1 != num2;
    
    printf("\n\n Conteúdo de num1 e num2 - %d e %d",num1,num2);
    printf("\n\n num1 != num2 - resultado = %d",resultado);
          
	scanf("%c",&pausa); 
/* -------------------------*/
	  
    num2 = 358;

    resultado = num1 <= num2;
    
    printf("\n\n Conteúdo de num1 e num2 - %d e %d",num1,num2);
	printf("\n\n num1 <= num2 - resultado = %d",resultado);
		        
    scanf("%c",&pausa); 
/* -------------------------*/
  
    num1 = 700;
    
    resultado = num1 >= num2;
	
	printf("\n\n Conteúdo de num1 e num2 - %d %d",num1,num2);
	printf("\n\n num1 >= num2 - resultado = %d",resultado);
    		       
    scanf("%c",&pausa);    
/* -------------------------*/
	
	num1 = 350;
    
	resultado = num1 < num2;
	
	printf("\n\n Conteúdo de num1 e num2 - %d e %d",num1,num2);
	printf("\n\n num1 < num2 - resultado = %d",resultado);
	
    scanf("%c",&pausa);   
/* -------------------------*/	
	
	num1 = 450;
    
	resultado = num1 < num2;
	
	printf("\n\n Conteúdo de num1 e num2 - %d e %d",num1,num2);
	printf("\n\n num1 < num2 - resultado = %d",resultado);
	
    scanf("%c",&pausa);   
/* -------------------------*/	

	num1 = 850;
    
	resultado = num1 > num2;
	
	printf("\n\n Conteúdo de num1 e num2 - %d e %d",num1,num2);
	printf("\n\n num1 > num2 - Resultado = %d",resultado);
	
    scanf("%c",&pausa);   
/* -------------------------*/

	num1 = 150;
    
	resultado = num1 > num2;
	
	printf("\n\n Conteúdo de num1 e num2 - %d e %d",num1,num2);
	printf("\n\n num1 > num2 - Resultado = %d",resultado);
	
    scanf("%c",&pausa);   
/* -------------------------*/
		    
    printf("\n");
    
    return 0;
}
