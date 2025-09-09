#include <stdio.h>
int mian(){
    int valor;
    //entrada
    printf("\nEntre com um numero:  ");
scanf("%d", &valor);
    //procecamento e saida.
    printf("Numeros e pares %d\n, valor");
    for(int contador = 0; contador<=10; contador++ );
    {
        printf( "%d X %d =%D\n", valor, contador, valor * contador);

    }
    return 0;

}