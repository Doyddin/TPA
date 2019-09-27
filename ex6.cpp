/*
Função: Calcular atraso de prestação
Autor: Cesar Augusto de Almeida
data de criação: 27/09/2019
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	float prestacao=0,valor=0,taxa=0;
	int tempo=0;
	printf("Informe o valor da prestação:\n");
	scanf("%f",&valor);
	printf("Informe o valor da taxa da prestação:\n");
	scanf("%f",&taxa);
	printf("Informe quantos dias ficou em atraso:\n");
	scanf("%i",&tempo);
	prestacao=valor+(valor*(taxa/100)*tempo);
	printf("O valor dessa prestação ficou de: %f",prestacao);
}
