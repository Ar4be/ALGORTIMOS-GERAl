    #include <stdio.h>
    int main(){
        int idade;
        do{
            printf("\nDigite sua idade:  ");
            scanf("%d" ,&idade);
            if(idade<0 || idade>120){
                printf("idade invalida. Digite novamente.");
            }
        }while(idade<0 || idade>120);
        printf("idade valida. Fim de progama");

        return 0;
    }
























