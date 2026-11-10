// Leia uma quantidade indeterminada de duplas de valores inteiros e para cada dupla, exiba “CRESCENTE” se for menor que, ou “DECRESCENTE” caso contrário. O programa deve finalizar quando forem digitados dois valores iguais.

#include <stdio.h>

int main() {
    int x, y;
    printf("Digite dois números:\n");
    scanf("%d", &x);
    scanf("%d", &y);

    while (x != y) {
        if (x < y) {
            printf("CRESCENTE!\n");
        } else {
            printf("DECRESCENTE!\n");
        }
        printf("Digite outros dois números:\n");
        scanf("%d", &x);
        scanf("%d", &y);
    }
    return 0;
}