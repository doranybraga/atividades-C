/*No trecho de c�digo a seguir, foi iniciado o desenvolvimento de uma fila est�tica que � implementada com aux�lio de uma struct contendo um campo �dados� (vetor), um campo �ini� que dever� armazenar o �ndice do primeiro elemento da fila e um campo �fim� que dever� armazenar o �ndice do �ltimo elemento da fila.

OLIVEIRA, Pietro Martins de; PEREIRA, Rog�rio de Leon. Estruturas de Dados I. Maring�: Unicesumar, 2019.

Observe:
 
Linha	C�digo
01
02
03
04
05
06
07
08
09
10
11
12
13
14
15
16
17
18	#define tamanho 5
 
struct tfila {
            int dados[tamanho];
            int ini;
            int fim;
};
 
struct tfila fila;
 
void remove() {
            int i;
            for (i = 0; i < tamanho; i++) {
                        fila.dados[i] = fila.dados[i+1];
            }
            fila.dados[fila.fim] = 0;
            fila.fim--;
}
 
Com base em seus conhecimentos sobre filas est�ticas, tomando como refer�ncia o c�digo-fonte acima, avalie:

I � A fun��o definida entre as linhas 11 e 18 � do tipo void, por isso n�o retorna valor algum. 
II � A fun��o remove() realiza o deslocamento dos dados da fila em uma posi��o da dire��o do fim � dire��o do in�cio da fila.
III � Podemos considerar que o in�cio da fila ser�, nesse caso, a posi��o 0 do vetor de dados da struct tfila.

De acordo com as afirma��es acima, � poss�vel dizer que est�(�o) correta(s) a(s) afirmativa(s):
          */
