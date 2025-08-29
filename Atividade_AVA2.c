#include <stdio.h>

int main(){
    int a, b, c;

    printf("digite os tres lados dos triangulos.  ");
    scanf("%d %d %d", &a, &b, &c);

    if ( a < b + c && b < a + c && c < a + b) {
        if (a == b && b == c){
            printf("Iquilatero\n");
        } else if (a == b || a == c || b == c){
            printf("Isoceles\n");
        } else {
            printf("Escaleno\n");
        } 
    } else {
        printf("nao e um triangulo\n");
    }
    return 0;
}


