/*
ATIVIDADE 1:Faça um pequeno programa para testar seus conhecimentos sobre ponteiros e 
alocação na memória.

A) Defina um ponteiro do tipo inteiro
B) Faça alocação dinâmica para o ponteiro recém-criado
C) Preencha a memória com o valor 42
D) Imprima o endereço do poneiro na memória e o valor contido nele*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int *ponteiro; // define um ponteiro de inteiro
	ponteiro = (int *)malloc(sizeof(int)); //calocação dinâmica do ponteiro
	
	*ponteiro = 42; //preencha a memória com o valor 42

	//imprima o endereço do ponteiro na memória e o valor contido nele
	printf ("Endereço: %d\nValor: %d\n\n", ponteiro, *ponteiro);

	system("pause");
	return(0);
}