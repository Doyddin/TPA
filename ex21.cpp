/*
função: Um programa que permita o usuário escolher um mês do ano
autores: Fernando Carreira e Cesar Augusto
data de criação: 16/10/2019
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int mes=0;
	printf("Insira o número do mês desejado (1-12)");
	scanf("%i", &mes);
		switch(mes){
			case 1:
				printf("Mês de Janeiro!");
				break;
			case 2:
				printf("Mês de Fevereiro!");
				break;
			case 3:
				printf("Mês de Março!");
				break;
			case 4:
				printf("Mês de Abril!");
				break;
			case 5:
				printf("Mês de Maio!");
				break;
			case 6:
				printf("Mês de Junho!");
				break;
			case 7:
				printf("Mês de Julho!");
				break;
			case 8:
				printf("Mês de Agosto!");
				break;
			case 9:
				printf("Mês de Setembro!");
				break;
			case 10:
				printf("Mês de Outubro!");
				break;
			case 11:
				printf("Mês de Novembro!");
				break;
			case 12:
				printf("Mês de Dezembro!");
				break;	
		}
