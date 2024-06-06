/*
Pilhas s�o estruturas de dados lineares nas quais uma regra espec�fica para inser��o e remo��o de dados deve ser respeitada. 
A regra � a seguinte: o primeiro elemento a entrar, ter� a menor prioridade no momento de sair.
Em suma, o primeiro que entra, � o �ltimo que sai.
 
OLIVEIRA, Pietro Martins de; PEREIRA, Rog�rio de Leon. Estruturas de Dados I. Maring�: Unicesumar, 2019.

Dessa forma, analise o trecho de c�digo abaixo, no qual apenas a fun��o de inser��o na pilha foi programada:


#include <stdio.h>
 
#define tamanho 10
 
struct tpilha {
            int dados[tamanho];
            int topo;
};
 
struct tpilha pilha;
 
void push(){
            printf("\nDigite o valor a ser empilhado: ");
            scanf("%d", &pilha.dados[pilha.topo]);
            pilha.topo++;
}

Com base no exposto, avalie as afirma��es que se seguem:
 
I � Pode-se dizer que, ao inserir um novo elemento nessa pilha, o topo � incrementado em uma unidade.  
II � A fun��o push(), da forma como est� implementada, poderia gerar erros sem�nticos caso a pilha esteja lotada, 
com mais de 10 elementos inseridos na pilha.
III � Da forma como foi implementada a struct tpilha, est� faltando, obrigatoriamente, o campo �int ini;�.

De acordo com as afirma��es acima, � poss�vel dizer que est�(�o) correta(s) a(s) afirmativa(s):
          
I � Pode-se dizer que, ao inserir um novo elemento nessa pilha, o topo � incrementado em uma unidade.  
II � A fun��o push(), da forma como est� implementada, poderia gerar erros sem�nticos caso a pilha esteja lotada, 
com mais de 10 elementos inseridos na pilha.         
          
*/
#include <stdio.h>

#define tamanho 10

struct tpilha {
    int dados[tamanho];
    int topo;
};

struct tpilha pilha = { .topo = 0 }; // Inicializa��o direta

void push() {
    printf("\nDigite o valor a ser empilhado: ");
    scanf("%d", &pilha.dados[pilha.topo]);
    pilha.topo++;
}
/*
O Erro: Inicializa��o Incorreta da Pilha

O erro est� na falta de inicializa��o do campo topo da estrutura tpilha. 
Quando voc� declara a vari�vel pilha, o valor de topo n�o � definido automaticamente como zero. 
Ele pode conter qualquer valor residual da mem�ria, o que significa que voc� pode estar tentando inserir elementos
em posi��es inv�lidas da pilha.

Consequ�ncias do Erro

Comportamento imprevis�vel: O programa pode funcionar aparentemente bem em alguns casos, mas falhar em outros, 
dependendo do valor inicial aleat�rio de topo.
Acesso indevido � mem�ria: Se topo tiver um valor maior que tamanho, voc� tentar� escrever al�m dos limites do 
array dados, o que pode corromper outras partes da mem�ria do programa.
Falha de segmenta��o (segmentation fault): Em casos mais graves, o acesso indevido � mem�ria pode levar a uma 
falha de segmenta��o, interrompendo a execu��o do programa.
A Solu��o: Inicializar o Topo da Pilha

Para corrigir o problema, voc� precisa garantir que o campo topo seja inicializado com zero, indicando que a 
pilha est� vazia no in�cio.
*/
