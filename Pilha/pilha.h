#include<stdio.h>
#include<stdlib.h>

typedef struct nodo Nodo;

typedef struct pilha Pilha;

void empilhar(Pilha* pilha, int n);
int desempilhar(Pilha* pilha);
int estaVazia(Pilha* pilha);
