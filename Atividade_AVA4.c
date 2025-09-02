    #include <stdio.h>

    int main (){
    float num, soma = 0;
    int cont = 0;

    printf("digite numero reais maiores que zero(0 para encerrar):\n");

    while (1){
    scanf("%f",&num);
    if (num == 0) {
    break;
    }
    if (num > 0) {
    soma += num;
    cont++;
    } else {
    printf("numero invalido. digite apenas numeros maiores que zero.\n ");
    }
    }
    if (cont == 0){
        printf("Nao foi entrado nenhum numero.\n");
    }else {
        printf("quantidade de numeros : %d\n, cont");
        printf("media: %.2f\n", soma / cont);
    }

    return 0;
















}
