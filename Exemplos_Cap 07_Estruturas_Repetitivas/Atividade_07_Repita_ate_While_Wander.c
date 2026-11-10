#include <stdio.h>

int main() {
    double celsius, fahrenheit;
    char resposta;

    do {
        printf("Digite a temperatura em Celsius: ");
        scanf("%lf", &celsius);

        fahrenheit = 9.0 * celsius / 5.0 + 32.0;
        printf("Equivalente em Fahrenheit: %.1f\n", fahrenheit);

        printf("Deseja repetir (s/n)? ");
        scanf(" %c", &resposta); // o espaço antes de %c descarta o '\n' pendente do scanf anterior

    } while (resposta == 's');

    return 0;
}

