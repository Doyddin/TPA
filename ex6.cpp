/*
Fun��o: Calcular atraso de presta��o
Autor: Cesar Augusto de Almeida
data de cria��o: 27/09/2019
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	float prestacao=0,valor=0,taxa=0;
	int tempo=0;
	printf("Informe o valor da presta��o:\n");
	scanf("%f",&valor);
	printf("Informe o valor da taxa da presta��o:\n");
	scanf("%f",&taxa);
	printf("Informe quantos dias ficou em atraso:\n");
	scanf("%i",&tempo);
	prestacao=valor+(valor*(taxa/100)*tempo);
	printf("O valor dessa presta��o ficou de: %f",prestacao);
}
