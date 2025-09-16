#include <stdio.h>

int main() {
    int num;

    while (1) {
        printf("Digite um número inteiro (0 para parar): ");
        scanf("%d", &num);

        if (num == 0) {
            break;  // Sai do loop imediatamente
        }
    }

    printf("Programa encerrado porque você digitou 0.\n");
    return 0;
}
