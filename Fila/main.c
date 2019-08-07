#include "fila.h"

main(){
	Fila* f = criaFila();
	if (estaVazia(f)){
		printf("Criada\n");
	}
	enfileira(f, 13);
	enfileira(f, 14);
	enfileira(f, 15);
	int valor = desenfileira(f);
	printf("%d\n", valor);
	valor = desenfileira(f);
	printf("%d\n", valor);
	valor = desenfileira(f);
	printf("%d\n", valor);
	valor = desenfileira(f);
	printf("%d\n", valor);
}
