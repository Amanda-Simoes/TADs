#include "pilha.h"

struct nodo{
	int elemento;
	struct nodo* proximo;
};

struct pilha{
	void* topo;
};

Pilha* criaPilha(){
	Pilha* p = (Pilha*) malloc(sizeof(Pilha));
	p->topo = NULL;
	return p;
}

void empilhar(Pilha* pilha, int n){
	Nodo* novo;
	novo = (Nodo*) malloc(sizeof(Nodo));
	novo->elemento = n;
	novo->proximo = pilha->topo;
	pilha->topo = novo;
	printf("empilhado!\n");
}

int desempilhar(Pilha* pilha){
	Nodo* aux = pilha->topo;
	int resultado = aux->elemento;
	pilha->topo = aux->proximo;
	free(aux);
	return resultado;
}

int estaVazia(Pilha* pilha){
	if ((pilha->topo) == NULL){
		return 1;
	}
	return 0;
}
