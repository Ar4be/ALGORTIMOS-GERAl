#include <stdio.h>  

int main(){
int numeroSecreto, palpite;
    printf("Insira um valor secreto: ");
    scanf("%d", &numeroSecreto);
    while (1){
    printf("Insira um valor: ");
    scanf("%d", &palpite);

    if(palpite < numeroSecreto){
        printf("O numero secreto correto e superior.\n");
    }else if (palpite > numeroSecreto){
        printf("o numero correto e inferior.\n");
    } else {
        printf("Parabens! Voce acertou.\n");
        break; 
        }   

    }

return 0;


}