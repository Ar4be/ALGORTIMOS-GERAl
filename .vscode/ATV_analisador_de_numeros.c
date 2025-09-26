#include <stdio.h>

int main() {
    int numeros[10];
    int maior, menor, pares = 0, impares = 0,soma = 0;
    int x, encontrado =-1;

    printf("digite 10 numeros inteiros;\n");
    for (int i = 0; i <10; i++){
        printf("Numero %d;  ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("nNumeros digitados:  ");
    for (int i = 0; i < 10; i++){
        printf("%d",numeros[i]);
    }
    printf("\n");

    maior = menor = numeros[0];
    for (int i = 0; i < 10; i++){
        if (numeros[i] > maior) maior = numeros [i];
        if (numeros[i] < maior) maior = numeros [i];

        if(numeros[i] % 2 == 0)
            pares++;
        else
            impares++;
    
        soma += numeros[i];
    }

    printf("nO maior numero digitado; %d", maior);
    printf("nO menor numero digitado; %d", menor);
    printf("nQuantidade de numeros pares: %d", pares);
    printf("nQuantidade de numeros impares: %d", impares);
    printf("nMedia aritmetica dos numeros: %.2f\n", (float)soma / 10);

    printf("\nDigite um numeo pra procurar no vetor:  ");

    scanf("%d, &x");

    for(int i = 0; i < 10; i++) {
        if (numeros[i] == x) {
            encontrado = i;
            break;
        }
    }

    if (encontrado != -1)
        printf("O numero %d foi encontrado na posicao (indice) %d.\n, x, encontrado");
    else
        printf("O numero %d  NAO foi encontrado no vetor.\n", x);
 
    return 0;

 }


















