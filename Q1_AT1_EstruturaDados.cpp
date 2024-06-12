/*No trecho de código a seguir, foi iniciado o desenvolvimento de uma fila estática que é implementada com auxílio de uma struct contendo um campo “dados” (vetor), um campo “ini” que deverá armazenar o índice do primeiro elemento da fila e um campo “fim” que deverá armazenar o índice do último elemento da fila.

OLIVEIRA, Pietro Martins de; PEREIRA, Rogério de Leon. Estruturas de Dados I. Maringá: Unicesumar, 2019.

Observe:
 
Linha	Código
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
 
Com base em seus conhecimentos sobre filas estáticas, tomando como referência o código-fonte acima, avalie:

I – A função definida entre as linhas 11 e 18 é do tipo void, por isso não retorna valor algum. 
II – A função remove() realiza o deslocamento dos dados da fila em uma posição da direção do fim à direção do início da fila.
III – Podemos considerar que o início da fila será, nesse caso, a posição 0 do vetor de dados da struct tfila.

De acordo com as afirmações acima, é possível dizer que está(ão) correta(s) a(s) afirmativa(s):
          */
