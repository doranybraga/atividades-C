/*ATIVIDADE 3: Crie um programa que leia uma variável e dois vetores dinâmicos, um com o tamanho lido e outro com o dobro desse tamanho. Preencha esses vetores respectivamente com potências de 2 e potências de 3.
A) Crie uma variável inteira e dois ponteiros do tipo inteiro.
B) Pergunte ao usuário o tamanho do vetor dinâmico e leia esse valor na variável inteira.
C) Aloque dinamicamente os dois vetores usando a função malloc.
D) Faça um laço de repetição  para preencher o primeiro vetor com potências de 2.
E) Faça um segundo laço de repetição para preencher o outro vetor com potências de 3.
F) Não se esqueça de usar a biblioteca math.h.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int n;
	int *vetor2;
	int *vetor3;

	printf ("Digite o tamanho do vetor:");
	scanf("%d",&n);

	vetor2 = (int *)malloc(n * sizeof(int));
	vetor3 = (int *)malloc(2 * n*sizeof(int));

	for (int i = 0; i < n; i++){
		vetor2[i] = (int)pow(2,i);
	}

	for (int i = 0; i < 2 * n; i++){
		vetor3[i] = (int)pow(3,i);	
	}


	printf("Vetor de potências de 2:\n");
	for (int i = 0; i < n; i++){
		printf("%d \n",vetor2[i]);
	}
	printf("\n");

	printf("Vetor de potências de 3:\n");
	for (int i = 0; i < 2 * n; i++){
		printf("%d \n",vetor3[i]);
	}
	printf("\n");

	free(vetor2);
	free(vetor3);

	return(0);
}