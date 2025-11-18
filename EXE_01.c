#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int valor;
    struct no *prox;
} No;

void inserirInicio(No **lista, int valor) {
    No *novo = (No *) malloc(sizeof(No));
    novo->valor = valor;
    novo->prox = *lista;
    *lista = novo;
}

void inserirFim(No **lista, int valor) {
    No *novo = (No *) malloc(sizeof(No));
    novo->valor = valor;
    novo->prox = NULL;

    if (*lista == NULL) {
        *lista = novo;
        return;
    }

    No *aux = *lista;
    while (aux->prox != NULL)
        aux = aux->prox;

    aux->prox = novo;
}

void removerValor(No **lista, int valor) {
    No *aux = *lista;
    No *ant = NULL;

    while (aux != NULL && aux->valor != valor) {
        ant = aux;
        aux = aux->prox;
    }

    if (aux == NULL) {
        printf("Valor não encontrado!\n");
        return;
    }

    if (ant == NULL)
        *lista = aux->prox;
    else
        ant->prox = aux->prox;

    free(aux);
    printf("Removido!\n");
}

void mostrar(No *lista) {
    printf("Lista: ");
    while (lista != NULL) {
        printf("%d ", lista->valor);
        lista = lista->prox;
    }
    printf("\n");
}

int main() {
    No *lista = NULL;
    int op, valor;

    do {
        printf("\n1. Inserir início\n2. Inserir fim\n3. Remover valor\n4. Mostrar\n5. Sair\n");
        scanf("%d", &op);

        switch(op) {
            case 1:
                printf("Valor: ");
                scanf("%d", &valor);
                inserirInicio(&lista, valor);
                break;

            case 2:
                printf("Valor: ");
                scanf("%d", &valor);
                inserirFim(&lista, valor);
                break;

            case 3:
                printf("Valor remover: ");
                scanf("%d", &valor);
                removerValor(&lista, valor);
                break;

            case 4:
                mostrar(lista);
                break;
        }
    } while(op != 5);

    return 0;
}
