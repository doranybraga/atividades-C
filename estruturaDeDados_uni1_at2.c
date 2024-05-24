/*
ATIVIDADE 2: Uma famosa fábrica de semáforos está testando um novo protótipo, menor, mais barato
e eficiente. Foi solicitado á equipe de TI um programa em linguagem C para fazer o teste do novo hardware.
O semáforo tem três objetos, cada um contém um atributo cor e outro id. Devido ás limitações de 
memória e processamento, é necessária a criação de um ponteiro que vai percorrendo a memória e 
imprimindo o valor na tela.
A) Crie uma estrutura que tenha dois atributos: cor(cadeia de caracteres) e id(inteiro).
B) Crie três variáveis com o tipo definido no item a.
C) Crie um ponteiro do mesmo tipo.
D) Inicialize as estruturas da seguinte forma: Cor vermelha, id 1 ; Cor amarela, id2 ; Cor verde, id 3.
E) Inicialize o ponteiro apontando para a primeira variável criada.
F) Por meio de operações aritméticas com ponteiros, percorra a memória e imprima o valor de cada uma das 
variáveis criadas nesse programa.*/

#include <stdio.h>
#include <stdlib.h>


struct semaforo{
	char cor[8];
	int id;
};

int main() {

	struct semaforo cores[3] = {
		{"vermelho", 1},
		{"amarelo", 2},
		{"verde", 3},
	};

	struct semafaro *cor_s = cores; 


	for (int i=0; i<3; i++){
		printf(" %d - %s \n",(cor_s + i)-> id, (cor_s + i)->cor);
	}

	system("pause");
	return(0);
}