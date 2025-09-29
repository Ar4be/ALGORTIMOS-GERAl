#include <stdio.h>
#include <string.h>

int main() {
    float temperaturas[12], mediaAnual = 0.0;
    const char * meses[12] = {
        "Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho", "Julho", "Agosto","Setembro", "Outubro", "Novembro", "Dezembro"  };

    for (int i = 0; i < 12; i++) {
        printf("Digite a temperatura media de %s: ", meses[i]);
        scanf("%f", &temperaturas[i]);
        mediaAnual += temperaturas[i]; 

    mediaAnual /= 12;

    printf("\nTemperaturas acima da media anual (%.2f Cº):\n", mediaAnual);
    for (int i = 0; i < 12; i++) {
        if (temperaturas[i] > mediaAnual) {
            printf("%d - %s - %.1f Cº\n", i + 1, meses[i], temperaturas[i]);
        }
    }

    return 0;
}
}
