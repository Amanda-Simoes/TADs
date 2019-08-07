#include "fila.h"

struct nodo{
	int elemento;
	struct nodo* proximo;
};

struct fila{
	void* inicio;
};

Fila* criaFila(){
	Fila* f = (Fila*) malloc(sizeof(Fila));
	f->inicio = NULL;
	return f;
}

int estaVazia(Fila* fila){
	if (fila->inicio==NULL){
		return 1;
	}
	return 0;
}

void enfileira(Fila* fila, int n){
	Nodo* novo = (Nodo*) malloc(sizeof(Nodo));
	novo->elemento = n;
	novo->proximo = NULL;
	if (estaVazia(fila)){
		fila->inicio = novo;
	}
	else{
		Nodo* aux = fila->inicio;
		while(aux->proximo!=NULL){
			aux = aux->proximo;
		}
		aux->proximo = novo;
	}
}

int desenfileira(Fila* fila){
	if (estaVazia(fila)){
		return NULL;
	}
	Nodo* aux = fila->inicio;
	int resultado = aux->elemento;
	fila->inicio = aux->proximo;
	free(aux);
	return resultado;
}
