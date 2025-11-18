#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Pessoa {
    char nome[50];
    int idade;
    float altura;
    struct Pessoa *prox;
} Pessoa;

Pessoa* inserirInicio(Pessoa *lista) {
    Pessoa *novo = (Pessoa*) malloc(sizeof(Pessoa));

    printf("Nome: "); scanf(" %d49[^\n]", novo->nome);
    printf("Idade: "); scanf("%d", &novo->idade);
    printf("Altura: "); scanf("%f", &novo->altura);

    novo->prox = lista;
    return novo;
}

Pessoa* inserirFim(Pessoa *lista) {
    Pessoa *novo = (Pessoa*) malloc(sizeof(Pessoa));

    printf("Nome: "); scanf(" %d49[^\n]", novo->nome);
    printf("Idade: "); scanf("%d", &novo->idade);
    printf("Altura: "); scanf("%f", &novo->altura);
    novo->prox = NULL;

    if (lista == NULL) return novo;

    Pessoa *aux = lista;
    while (aux->prox != NULL) aux = aux->prox;
    aux->prox = novo;

    return lista;
}

Pessoa* removerPorNome(Pessoa *lista, char nome[]) {
    Pessoa *aux = lista, *ant = NULL;

    while (aux != NULL && strcmp(aux->nome, nome) != 0) {
        ant = aux;
        aux = aux->prox;
    }

    if (aux == NULL) {
        printf("Pessoa não encontrada.\n");
        return lista;
    }

    if (ant == NULL) lista = aux->prox;
    else ant->prox = aux->prox;

    free(aux);
    printf("Removido!\n");
    return lista;
}

void mostrar(Pessoa *lista) {
    Pessoa *aux = lista;
    printf("\n--- LISTA DE PESSOAS ---\n");
    while (aux != NULL) {
        printf("Nome: %s | Idade: %d | Altura: %.2f\n",
               aux->nome, aux->idade, aux->altura);
        aux = aux->prox;
    }
}

int main() {
    Pessoa *lista = NULL;
    int opc;
    char nome[50];

    do {
        printf("\n1- Inserir início\n2- Inserir fim\n3- Remover por nome\n4- Mostrar\n5- Sair\n");
        scanf("%d", &opc);

        switch(opc) {
            case 1: lista = inserirInicio(lista); break;
            case 2: lista = inserirFim(lista); break;
            case 3:
                printf("Nome a remover: ");
                scanf(" %d49[^\n]", nome);
                lista = removerPorNome(lista, nome);
                break;
            case 4: mostrar(lista); break;
        }
    } while (opc != 5);

    // liberar memória
    while (lista != NULL) {
        Pessoa *tmp = lista;
        lista = lista->prox;
        free(tmp);
    }

    return 0;
}
