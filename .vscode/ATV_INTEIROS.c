#include <stdio.h>

int main() {
    int n;
    int quantidade = 0;
    int maior = 0;
    int soma = 0;

    while (1) {
        scanf("%d", &n);
        if (n == 0) {
            break;
        }

        if (quantidade == 0) {
            maior = n; // Define o primeiro número como maior inicialmente
        } else if (n > maior) {
            maior = n;
        }

        soma += n;
        quantidade++;
    }

    printf("%d\n", quantidade);
    printf("%d\n", maior);

    if (quantidade == 0) {
        printf("0.00\n");
    } else {
        printf("%.2f\n", (float)soma / quantidade);
    }

    return 0;
}