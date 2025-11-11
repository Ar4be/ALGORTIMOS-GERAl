#include <stdio.h>

#define QTD_PESSOAS 5

// struct Pessoas
struct Pessoa {
    char nome[100];
    int ano_nascimento;
    char sexo;
    float altura;
    float peso;
    double cpf;
};

int main() {
    struct Pessoa pessoas[QTD_PESSOAS];
    int i;

    for (i = 0; i < QTD_PESSOAS; i++) {
        printf("\n=== Cadastro da Pessoa %d ===\n", i + 1);

        printf("Nome: ");
        fgets(pessoas[i].nome,sizeof(pessoas[i].nome), stdin); 

        printf("Ano de nascimento: ");
        scanf("%d", &pessoas[i].ano_nascimento);
    
        // Sexo
        printf("Sexo (M/F): ");
        scanf("%c", &pessoas[i].sexo);
           
        printf("Altura (em metros): ");
        scanf("%f", &pessoas[i].altura);

        printf("Peso (em kg): ");
        scanf("%f", &pessoas[i].peso);

        printf("CPF (somente números): ");
        scanf("%lf", &pessoas[i].cpf);
    }
// dados
    printf("\n===DADOS CADASTRADOS ===\n");

    for (i = 0; i < QTD_PESSOAS; i++) {
        printf("\nPessoa %d\n", i + 1);
        printf("Nome: %s\n", pessoas[i].nome);
        printf("Ano de nascimento: %d\n", pessoas[i].ano_nascimento);
        printf("Sexo: %c\n", pessoas[i].sexo);
        printf("Altura: %.2f m\n", pessoas[i].altura);
        printf("Peso: %.2f kg\n", pessoas[i].peso);
        printf("CPF: %.0lf\n", pessoas[i].cpf);
    }

    return 0;
}