/*
Pilhas são estruturas de dados lineares nas quais uma regra específica para inserção e remoção de dados deve ser respeitada. 
A regra é a seguinte: o primeiro elemento a entrar, terá a menor prioridade no momento de sair.
Em suma, o primeiro que entra, é o último que sai.
 
OLIVEIRA, Pietro Martins de; PEREIRA, Rogério de Leon. Estruturas de Dados I. Maringá: Unicesumar, 2019.

Dessa forma, analise o trecho de código abaixo, no qual apenas a função de inserção na pilha foi programada:


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

Com base no exposto, avalie as afirmações que se seguem:
 
I – Pode-se dizer que, ao inserir um novo elemento nessa pilha, o topo é incrementado em uma unidade.  
II – A função push(), da forma como está implementada, poderia gerar erros semânticos caso a pilha esteja lotada, 
com mais de 10 elementos inseridos na pilha.
III – Da forma como foi implementada a struct tpilha, está faltando, obrigatoriamente, o campo “int ini;”.

De acordo com as afirmações acima, é possível dizer que está(ão) correta(s) a(s) afirmativa(s):
          
I – Pode-se dizer que, ao inserir um novo elemento nessa pilha, o topo é incrementado em uma unidade.  
II – A função push(), da forma como está implementada, poderia gerar erros semânticos caso a pilha esteja lotada, 
com mais de 10 elementos inseridos na pilha.         
          
*/
#include <stdio.h>

#define tamanho 10

struct tpilha {
    int dados[tamanho];
    int topo;
};

struct tpilha pilha = { .topo = 0 }; // Inicialização direta

void push() {
    printf("\nDigite o valor a ser empilhado: ");
    scanf("%d", &pilha.dados[pilha.topo]);
    pilha.topo++;
}
/*
O Erro: Inicialização Incorreta da Pilha

O erro está na falta de inicialização do campo topo da estrutura tpilha. 
Quando você declara a variável pilha, o valor de topo não é definido automaticamente como zero. 
Ele pode conter qualquer valor residual da memória, o que significa que você pode estar tentando inserir elementos
em posições inválidas da pilha.

Consequências do Erro

Comportamento imprevisível: O programa pode funcionar aparentemente bem em alguns casos, mas falhar em outros, 
dependendo do valor inicial aleatório de topo.
Acesso indevido à memória: Se topo tiver um valor maior que tamanho, você tentará escrever além dos limites do 
array dados, o que pode corromper outras partes da memória do programa.
Falha de segmentação (segmentation fault): Em casos mais graves, o acesso indevido à memória pode levar a uma 
falha de segmentação, interrompendo a execução do programa.
A Solução: Inicializar o Topo da Pilha

Para corrigir o problema, você precisa garantir que o campo topo seja inicializado com zero, indicando que a 
pilha está vazia no início.
*/
