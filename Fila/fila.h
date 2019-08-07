#include<stdio.h>
#include<stdlib.h>

typedef struct nodo Nodo;

typedef struct fila Fila;

Fila* criaFila();
int estaVazia(Fila* fila);
void enfileira(Fila* fila, int n);
int desenfileira(Fila* fila);
