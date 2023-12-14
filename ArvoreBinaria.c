#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura da árvore
struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

// Função para criar um novo nó na árvore
struct Node *criaNodo(int valor) {
    struct Node *novoNode = (struct Node *)malloc(sizeof(struct Node));
    novoNode->data = valor;
    novoNode->left = novoNode->right = NULL;
    return novoNode;
}

// Função para inserir um valor na árvore
struct Node *insere(struct Node *root, int valor) {
    if (root == NULL) {
        return criaNodo(valor);
    }

    if (valor < root->data) {
        root->left = insere(root->left, valor);
    } else if (valor > root->data) {
        root->right = insere(root->right, valor);
    }

    return root;
}

// Função para imprimir os elementos da árvore em ordem
void imprimeEmOrdem(struct Node *root) {
    if (root != NULL) {
        imprimeEmOrdem(root->left);
        printf("%d ", root->data);
        imprimeEmOrdem(root->right);
    }
}

int main() {
    struct Node *arvore = NULL;

    arvore = insere(arvore, 15);
    arvore = insere(arvore, 10);
    arvore = insere(arvore, 20);
    arvore = insere(arvore, 8);
    arvore = insere(arvore, 12);

    printf("Elementos da árvore em ordem: ");
    imprimeEmOrdem(arvore);
    printf("\n");

    return 0;
}
