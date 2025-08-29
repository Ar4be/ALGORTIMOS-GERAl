#include <stdio.h>

int main (){
    float n1,n2,n3, media;
    int faltas;

    printf("digite as tres notas:  ");
    scanf("%f %f %f", &n1,&n2,&n3);

    printf("digite o numero de faltas:  ");
    scanf("%d", &faltas);

    media = (n1 + n2 + n3)  /3.0;

    if (media == 0 && faltas > 18){
        printf("Sr\n");
    } else if (faltas > 18){
        printf("reprovado por faltas\n");
    } else if (media >= 9 && media <=10) {
        printf ("SS\n");
    }    else if (media >= 7 && media < 9) {
        printf ("MS\n");
    }    else if (media >= 5 && media < 7) {
        printf ("MM\n");
    }else if (media >= 3 && media < 5 ) {
        printf ("MI\n");
    }else if (media >= 1 && media < 3) {
        printf ("II\n");
    } else {
        printf("nota invalida\n");
    }

    return 0;
}