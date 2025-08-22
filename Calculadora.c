#include <stdio.h>
int main(){

float valor_a,valor_b;
float resultado;
char operacao;

printf("digite o valor a:");
scanf("%f",&valor_a);
printf ("digite o valor b:");
scanf ("%f",&valor_b);

printf("[S]Soma | [U]Subtracao | [M]Multiplicacao | [D]Divisao\n");
printf("digite a operacao: ");
scanf("%s",&operacao);
//Calculo das operacoes
if(operacao=='S'  || operacao=='s'){
    resultado=valor_a+valor_b;
}else if(operacao=='U' || operacao=='u'){
    resultado=valor_a+valor_b;
}else if(operacao=='M' ||operacao=='M'){
    resultado=valor_a+valor_b;
}else if(operacao=='D' || operacao=='D'){
    resultado=valor_a+valor_b;


}


//saida o valor
switch(operacao){
    case 'S':
    case 's':
    resultado = valor_a = valor_b;
    break;
    case 'U':
    case 'u':
    resultado = valor_a = valor_b;
   break;
   case 'M':
   case 'm':
   resultado = valor_a = valor_b;
   break;
   case 'D':
   case 'd':
   if (valor_b != 0)
   resultado = valor_a / valor_b;
   else {
    printf("Erro divisao por zerop\n");
return 1;
   }
printf("meu resultado e:%.2f\n", resultado);

return 0;
 
}

return 0;
}