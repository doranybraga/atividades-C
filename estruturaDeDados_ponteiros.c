#include <stdio.h>
#include <stdlib.h>

int xi; //Cria variável do tipo inteiro com nome de xi
int *ponteiro; // cria ponteiro com nome ponteiro

void imprimir(){ //função imprimir, atribuição.
	printf ("Valor de xi = %d \n", xi);
	printf ("valor de &xi = %p \n", &xi);
	printf ("Valor de ponteiro = %p \n", ponteiro);
	printf ("Valor de *ponteiro = %d \n \n", *ponteiro);
}

int main(){
	xi = 10; // variável xi recebe valor 10
	ponteiro = &xi; // ponteiro recebe endereço da variável xi
	imprimir (); //executa função imprimir

	xi = 20; // variável xi recebe valor 20
	imprimir(); // executa função imprimir

	*ponteiro = 30; //ponteiro recebe o valor 30 no seu conteúdo
	imprimir();

	system("pause");
	return(0);

}

/*
SAIDA DO PROGRAMA:
Valor de xi = 10 
valor de &xi = 0x404018 
Valor de ponteiro = 0x404018 
Valor de *ponteiro = 10 
 
Valor de xi = 20 
valor de &xi = 0x404018 
Valor de ponteiro = 0x404018 
Valor de *ponteiro = 20 
 
Valor de xi = 30 
valor de &xi = 0x404018 
Valor de ponteiro = 0x404018 
Valor de *ponteiro = 30

*/