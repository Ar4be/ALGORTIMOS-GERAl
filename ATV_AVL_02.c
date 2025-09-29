#include <stdio.h>

int main() {
    float salario, NovoSalario, aumento, percentual;

    printf("Digite o salario do colaborador: R$  ");
    scanf("%f", &salario);

   
    if (salario <= 280.00) {
        percentual = 20.0;
         } else if (salario <= 700.00) {
        percentual = 15.0;
    } else if (salario <= 1500.00) {
        percentual = 10.0;
       } else {
        percentual = 5.0;
    }

    aumento = salario * (percentual / 100);
    NovoSalario = salario + aumento;

  
    printf("Salario antes do reajuste: R$ %.2f\n", salario);
    printf("Percentual do aumento aplicado: %.0f%%\n", percentual);
    printf("Valor do aumento: R$ %.2f\n", aumento);
    printf("Novo salario depois do aumento: R$ %.2f\n", NovoSalario);

    return 0;
}








