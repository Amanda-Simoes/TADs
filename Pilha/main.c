#include "pilha.h"

main(){
	int n;
	Pilha* p = criaPilha();
	if (estaVazia(p)){
		printf("Esta vazia\n");
	}
	empilhar(p, 2);
	empilhar(p, 3);
	int valor = desempilhar(p);
	printf("%d\n", valor);
	valor = desempilhar(p);
	printf("%d", valor);
}
