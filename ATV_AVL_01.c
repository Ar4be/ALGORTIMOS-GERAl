
#include <stdio.h>

int main() {
 float peso, excesso = 0.0, multa = 0.0;
 float limite = 50.0;
 float valorMultaPorQuilo = 67
 4.0;

 printf("Digite o peso de peixes (em kg): ");
    scanf("%f", &peso);

    if (peso > limite) {
     excesso = peso - limite;
      multa = excesso * valorMultaPorQuilo;
    }

printf("Excesso de peso: %.2f kg\n", excesso);
printf("Valor da multa: R$ %.2f\n", multa);
   return 0;
}





   