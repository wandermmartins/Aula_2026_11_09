#include <stdio.h>

int main() { 
    // Algoritmo para converter quilômetros em milhas
    double quilometros, milhas; // Sem acento
    char resposta;

    do {
        printf("Digite o valor em quilômetros: ");
        scanf("%lf", &quilometros);
        
        milhas = quilometros * 0.621371; 
        printf("O valor em milhas é: %.2lf\n", milhas);

        printf("Deseja repetir? (s/n): ");
        scanf(" %c", &resposta);
    
    } while (resposta == 's');
    
    return 0;
}
