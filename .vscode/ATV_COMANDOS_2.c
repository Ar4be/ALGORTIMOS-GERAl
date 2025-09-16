#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            continue; // Pula o resto do código e vai para a próxima iteração
        }
        printf("%d\n", i);
    }
    return 0;
}
