#include <stdio.h>

int main(void) {
    double quilometros, milhas; // Sem acento
    char resposta;

    do {
        printf("Digite o valor em milhas: ");
        scanf("%lf", &milhas);

        quilometros = milhas * 1.60934; 
        printf("O valor em quilômetros é: %.2f\n", quilometros);

        printf("Deseja repetir? (s/n): ");
        scanf(" %c", &resposta);
    } while (resposta == 's');

    return 0;
}
