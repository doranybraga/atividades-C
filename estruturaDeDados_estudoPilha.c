/*PILHA é uma estrutura em que os dados são inseridos e removidos no seu TOPO.
LIFO > Last In, First Out || último a entrar, primeiro a sair*/

//BIBLIOTECAS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//CONSTANTES
#define tamanho 5

//ESTRUTURA DA PILHA
struct tpilha {
	int dados[tamanho];
	int ini;
	int fim;
};

//VARIÁVEIS GLOBAIS
struct tpilha pilha;
int op;

//PROTOTIPAÇÃO
void pilha_entrar();
void pilha_sair();
void pilha mostrar():
void menu_mostrar();

//FUNÇÃO PRINCIPAL
int main(){
	setlocale(LC_ALL, "portuguese");
	op = 1;
	pilha.ini = 0;
	pilha.fim = 0;
	
	while (op != 0){
		system(cls);
		pilha_mostrar();
		menu_mostrar();
		scanf("%d",&op);

		switch(op){
			case1:
				pilha_entrar();
			break;
			case2:
				pilha_sair();
			break;
		}
	}
	return(0);
}

// ADICIONAR UM ELEMENTO NO FINAL DA PILHA
void pilha_entrar(){
	if (pilha.fim==tamanho) {
		printf("\n A pilha está cheia, impossível empilhar!\n\n");
		system("pause");
	}
	else{
		printf("\n Digite o valor a ser empilhado:");
		scanf("%d", &pilha.dados[pilha.fim]);
		pilha.fim++
	}
}

//RETIRAR O ÚLTIMO ELEMENTO DA PILHA
void pilha_sair(){
	if (pilha.ini == pilha.fim) {
		printf("\n A pilha está vazia, imposível desempilhar!\n\n");
		system("pause");
	}
	else {
		pilha.dados[pilha.fim-1] = 0;
		pilha.fim--;
	}
}

//MOSTRAR O CONTEÚDO DA PILHA
void pilha_mostrar() {
	int i;
	printf("[");
	for (i = 0; i < tamanho; i++){
		printf("%d", pilha.dados[i]);
	}
	printf("]\n\n");
}

//MOSTRAR MENU DE OPÇÕES
void menu_mostrar() {
	printf("\n Escolha uma opção:\n");
	printf("1 - Empilhar \n ");
	printf("2 - Desempilhar \n");
	printf("0 - Sair \n\n");
}