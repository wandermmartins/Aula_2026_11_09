//Ler um número inteiro N(1< N <10). A seguir, mostrar a tabuada de N de 1 a 10.

#include <stdio.h>

int main() {
    int n, i;
    printf("Deseja a tabuada para qual valor? ");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}