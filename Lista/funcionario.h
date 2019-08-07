//TAD de funcionario//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct funcionario Funcionario; 

typedef struct lista Lista;

typedef struct nodo Nodo;

Lista* criaLista();

int estaVazia(Lista* lista);

void desalocaLista(Lista* lista);

void insereFuncionario(Lista* lista);

void removeFuncionario(Lista* lista);

Funcionario* buscaFuncionario(Lista* lista, char nome[255]);

void imprimeFuncionario(Lista* lista);

void imprimeLista(Lista* lista);
