#include <iostream>
#include <cstdio> // Para usar printf e scanf

using namespace std;

int main() {
    // Declaração de variáveis
    float altura, pesoAtual, IMC;
    

    // Entrada de dados
    puts(">> Calcule seu IMC - Indice de Massa Corporal <<");
    printf("Informe sua altura: ");
    scanf("%f", &altura);
    
    printf("Informe seu peso atual: ");
    scanf("%f", &pesoAtual);

	IMC = pesoAtual / (altura * altura);
    	 
    // Saída de dados
    printf("\n O seu IMC e: %.2f\n", IMC);
    return 0;
}


