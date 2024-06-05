#include <stdio.h>
#include <stdlib.h>

int main(){
	int *ponteiro;
	printf ("Endereco do ponteiro: %p\n\n",ponteiro);
	ponteiro =(int*)malloc(sizeof(int));
	printf ("Endereco: %p\n Valor: %d\n\n", ponteiro, *ponteiro);
	*ponteiro=10;
	printf("Endereco: %p\n Valor: %d\n\n", ponteiro, *ponteiro);

	int x;
	x=20;
	ponteiro=&x;
	printf("Endereco: %p\n Valor: %d\n\n", ponteiro, *ponteiro);

	ponteiro = (int*) malloc(sizeof(int));
	printf("Endereco: %p\n Valor: %d\n\n", ponteiro, *ponteiro);

	system("pause");
	Return(0);
}

/*Codigo página 32 livro com problemas:
main(): A função main deve retornar um valor inteiro (int). A declaração correta seria: int main() { ... }

Inicialização do ponteiro: Antes de usar o ponteiro pela primeira vez, ele deve ser inicializado para apontar para um endereço de memória válido. 
No código, você imprime o endereço do ponteiro antes de alocá-lo, o que pode resultar em um endereço indefinido.

Verificar alocação de memória: É uma boa prática verificar se a alocação de memória com malloc foi bem-sucedida.
Se malloc retornar NULL, significa que não há memória suficiente disponível.

----------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ponteiro = NULL; // Inicializa o ponteiro como NULL

    // Alocação de memória e verificação
    ponteiro = (int*)malloc(sizeof(int));
    if (ponteiro == NULL) {
        fprintf(stderr, "Erro ao alocar memória.\n");
        return 1; // Indica erro na execução
    }

    printf("Endereco: %p\n Valor: %d\n\n", ponteiro, *ponteiro);
    *ponteiro = 10;
    printf("Endereco: %p\n Valor: %d\n\n", ponteiro, *ponteiro);

    free(ponteiro); // Libera a memória alocada

    int x = 20;
    ponteiro = &x;
    printf("Endereco: %p\n Valor: %d\n\n", ponteiro, *ponteiro);

    // Nova alocação e verificação
    ponteiro = (int *)malloc(sizeof(int));
    if (ponteiro == NULL) {
        fprintf(stderr, "Erro ao alocar memória.\n");
        return 1; // Indica erro na execução
    }

    printf("Endereco: %p\n Valor: %d\n\n", ponteiro, *ponteiro);

    free(ponteiro); // Libera a memória alocada novamente

    system("pause");
    return 0; // Retorno correto
}
*/