/*
função: caso dia da semana.
autores: Fernando Carreira e Cesar Augusto
data de criação: 16/10/2019
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int dia=0,certo=0;
	while(certo==0){
	printf("Informe um número, correspondente ao número de dias da semana:\n");
	scanf("%i",&dia);
	switch(dia){
		case 1:
			printf("Domingo");	
		certo++;
		break;
		case 2:
		 printf("Segunda");
		certo++;
		break;
		case 3:
		printf("Terça");	
		certo++;
		break;
		case 4:
			printf("Quarta");
		certo++;
		break;
		case 5:
			printf("Quinta");
		certo++;
		break;
		case 6:
			printf("Sexta");
			certo++;
		break;
		case 7:
			printf("Sábado");
			certo++;
		break;
	}
	if(dia>7){
	printf("Número inválido\n");
	}
}}

