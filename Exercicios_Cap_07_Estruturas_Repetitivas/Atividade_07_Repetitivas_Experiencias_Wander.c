// Maria quer saber a quantidade total de cobaias utilizadas no laboratório e o percentual de cada tipo (C: Coelho, R: Rato, S: Sapo). O programa deve ler a quantidade de casos de teste N. Cada caso de teste consiste de uma linha contendo um inteiro (quantidade de cobaias) e um caractere (C, R ou S). Ao final, emitir um relatório completo com os totais e as porcentagens com duas casas decimais.

#include <stdio.h>

int main() {
    int n, i, qtd, total = 0, coelhos = 0, ratos = 0, sapos = 0;
    char tipo;

    printf("Quantos casos de teste serao digitados? ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Quantidade de casos invalida.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("Quantidade de cobaias: ");
        if (scanf("%d", &qtd) != 1) {
            printf("Entrada invalida. Relatorio parcial:\n");
            break;
        }
        printf("Tipo de cobaia: ");
        if (scanf(" %c", &tipo) != 1) {
            printf("Entrada invalida. Relatorio parcial:\n");
            break;
        }

        total += qtd;
        if (tipo == 'C' || tipo == 'c') {
            coelhos += qtd;
        } else if (tipo == 'R' || tipo == 'r') {
            ratos += qtd;
        } else if (tipo == 'S' || tipo == 's') {
            sapos += qtd;
        }
    }

    printf("\nRELATORIO FINAL:\n");
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", coelhos);
    printf("Total de ratos: %d\n", ratos);
    printf("Total de sapos: %d\n", sapos);
    if (total > 0) {
        printf("Percentual de coelhos: %.2lf %%\n", (double)coelhos / total * 100.0);
        printf("Percentual de ratos: %.2lf %%\n", (double)ratos / total * 100.0);
        printf("Percentual de sapos: %.2lf %%\n", (double)sapos / total * 100.0);
    } else {
        printf("Percentual de coelhos: 0.00 %%\n");
        printf("Percentual de ratos: 0.00 %%\n");
        printf("Percentual de sapos: 0.00 %%\n");
    }

    return 0;
}