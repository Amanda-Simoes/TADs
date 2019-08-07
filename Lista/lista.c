#include "funcionario.h"

main(){
	Lista* lista = criaLista();
	int op;
	do{
		printf("1)Adiciona funcionario\n2)Remove funcionario\n3)Desaloca lista\n4)Imprime funcionario\n5)Imprime lista\n0)Sair\nEscolha: ");
		scanf("%d", &op);
		if(op==1){
			insereFuncionario(lista);
		} else if(op==2){
			removeFuncionario(lista);
		} else if(op==3){
			desalocaLista(lista);
		} else if(op==4){
			imprimeFuncionario(lista);
		} else if(op==5){
			imprimeLista(lista);
		} else if(op==0){
			printf("Saindo...");
		} else {
			printf("Operacao inexistente");
		}
	}while(op!=0);
}
