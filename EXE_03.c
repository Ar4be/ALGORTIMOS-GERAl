#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct No {
    char nome[50];
    int senha;
    struct No *prox;
} No;

typedef struct {
    No *inicio;
    No *fim;
    int proximaSenha;
} Fila;

void inicializar(Fila *f) {
    f->inicio = f->fim = NULL;
    f->proximaSenha = 1;
}

void enfileirar(Fila *f) {
    No *novo = (No*) malloc(sizeof(No));

    printf("Nome: ");
    scanf(" %49[^\n]", novo->nome);

    novo->senha = f->proximaSenha++;
    novo->prox = NULL;

    if (f->fim == NULL) {
        f->inicio = f->fim = novo;
    } else {
        f->fim->prox = novo;
        f->fim = novo;
    }

    printf("Senha gerada: %d\n", novo->senha);
}

void desenfileirar(Fila *f) {
    if (f->inicio == NULL) {
        printf("Fila vazia.\n");
        return;
    }

    No *tmp = f->inicio;
    printf("Chamando: %s (senha %d)\n", tmp->nome, tmp->senha);

    f->inicio = f->inicio->prox;
    if (f->inicio == NULL) f->fim = NULL;

    free(tmp);
}

void mostrar(Fila *f) {
    No *aux = f->inicio;

    printf("\n--- FILA ATUAL ---\n");
    while (aux != NULL) {
        printf("%s | senha %d\n", aux->nome, aux->senha);
        aux = aux->prox;
    }
}

int main() {
    Fila f;
    inicializar(&f);
    int opc;

    do {
        printf("\n1- Gerar nova senha\n2- Chamar próxima pessoa\n3- Mostrar fila\n4- Sair\n");
        scanf("%d", &opc);

        switch(opc) {
            case 1: enfileirar(&f); break;
            case 2: desenfileirar(&f); break;
            case 3: mostrar(&f); break;
        }
    } while (opc != 4);

    // liberar memória
    while (f.inicio != NULL) {
        No *tmp = f.inicio;
        f.inicio = f.inicio->prox;
        free(tmp);
    }

    return 0;
}
