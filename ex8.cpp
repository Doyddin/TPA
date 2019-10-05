/*
Função: calcular quociente e resto
autor: Cesar Augusto de Almeida
data de criação: 05/10/2019
*/
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int quociente=0,resto=0,divisor=0,dividendo=0,vezes=0;
	printf("Informe o valor do divisor:\n");
	scanf("%i",&divisor);
	printf("Informe o valor do dividendo:\n");
	scanf("%i",&dividendo);
	quociente=dividendo/divisor;
	vezes=divisor*quociente;
	resto=dividendo-vezes;
	printf("O valor do quociente é: %i, e o resto: %i",quociente,resto);
}
