#include "funcionario.h"

struct funcionario{
	char nome[255];
	char cargo[255];
	int idade;
	float salario;
};

struct nodo{
	void* info;
	struct nodo* proximo;
};

struct lista{
	Nodo* inicio;
};

Lista* criaLista(){
	Lista* l = (Lista*) malloc(sizeof(Lista));
	l->inicio = NULL;
	return l;
}

int estaVazia(Lista* lista){
	if (lista->inicio==NULL){
		return 1;
	}
	return 0;
}

void desalocaLista(Lista* lista){
	Nodo* no = lista->inicio;
	while (no!=NULL){
		Nodo* aux = no->proximo;
		free(no);
		no = aux;
	}
	printf("Lista desalocada com sucesso!");
}

void insereFuncionario(Lista* lista){
	char nome[255];
	char cargo[255];
	int idade;
	float salario;
	printf("Informe o nome do funcionario: ");
	scanf("%s", &nome);
	printf("Informe o cargo do funcionario: ");
	scanf("%s", &cargo);
	printf("Informe a idade do funcionario: ");
	scanf("%d", &idade);
	printf("Informe o salario do funcionario: ");
	scanf("%f", &salario);
	Funcionario* novo = (Funcionario*) malloc(sizeof(Funcionario));
	strcpy(novo->nome, nome);
	strcpy(novo->cargo, cargo);
	novo->idade = idade;
	novo->salario = salario;
	Nodo* no = (Nodo*) malloc(sizeof(Nodo));
	no->info = novo;
	no->proximo = NULL;
	Nodo* aux = lista->inicio;
	Nodo* ant = NULL;
	if (estaVazia(lista)){
		lista->inicio = no;
	}
	else{
		Funcionario* func = aux->info;
		while(aux!=NULL && strcmp(func->nome, nome)<0){
			ant = aux;
			aux = aux->proximo;
			func = aux->info;
		}
		if (ant==NULL){
			no->proximo = lista->inicio;
			lista->inicio = no;
		} else if (aux==NULL){
			ant->proximo = no;
		} else {
			no->proximo = ant->proximo;
			ant->proximo = no;
		}
		printf("Funcionario inserido com sucesso!");
	}
}


void removeFuncionario(Lista* lista){
	char nome[255];
	printf("Informe o nome do funcionario: ");
	scanf("%s", &nome);
	Nodo* aux = lista->inicio;
	Nodo* ant = NULL;
	if (estaVazia(lista)){
		printf("Estah vazia");
	}
	else{
		Funcionario* func = aux->info;
		while(aux!=NULL && strcmp(func->nome, nome) != 0){
			ant = aux;
			aux = aux->proximo;
			func = aux->info;
		}
		if(aux==NULL){
			printf("Funcionario nao encontrado");
		}
		else if(ant==NULL){
			lista->inicio = aux->proximo;
		} else{
			ant->proximo = aux->proximo;
		}
		free(aux);
		printf("Removido com sucesso!");
	}
}

Funcionario* buscaFuncionario(Lista* lista, char nome[255]){
	Nodo* aux = lista->inicio;
	if (estaVazia(lista)){
		printf("Lista estah vazia");
		return NULL;
	}
	else{
		Funcionario* func = aux->info;
		while((aux!=NULL) && (strcmp(func->nome, nome) != 0)){
			aux = aux->proximo;
			func = aux->info;
		}
		return func;
	}
}

void imprimeFuncionario(Lista* lista){
	char nome[255];
	printf("Informe o nome do funcionario: ");
	scanf("%s", &nome);
	Funcionario* aux = buscaFuncionario(lista, nome);
	if(aux==NULL){
		printf("Funcionario nao encontrado");
	}
	else{
		printf("Nome: %s \nCargo: %s \nIdade: %d", aux->nome, aux->cargo, aux->idade);
	}
}

void imprimeLista(Lista* lista){
	Nodo* aux = lista->inicio;
	if(estaVazia(lista)){
		printf("Lista estah vazia");
	}
	else{
		Funcionario* func = aux->info;
		while(aux!=NULL){
			printf("Nome: %s \nCargo: %s \nIdade: %d \nSalario: R$%.2f\n -------------------\n", func->nome, func->cargo, func->idade, func->salario);
			aux = aux->proximo;
		}
	}
}
