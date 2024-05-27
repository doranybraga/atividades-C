#include <stdio.h>
#include <stdlib.h>

//declarando um registro,struct.

struct fraction{ //struct=registro fraction =nome do registro

	//elementos do registro
	int numerator; //tipo + nome do campo
	int denominator;
	int value;
}

//criando uma variável do tipo struct

struct fraction metade;  // struct + nome do registro + nome da variável
	metade.numerator = 1;  // atribui valor ao elemento numerator
	metade.denominator = 2; //atribui valor ao elemento denominator
	metade.value = metade.numerator/metade.denominator // faz operação

