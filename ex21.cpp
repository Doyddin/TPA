/*
fun��o: Um programa que permita o usu�rio escolher um m�s do ano
autores: Fernando Carreira e Cesar Augusto
data de cria��o: 16/10/2019
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int mes=0;
	printf("Insira o n�mero do m�s desejado (1-12)");
	scanf("%i", &mes);
		switch(mes){
			case 1:
				printf("M�s de Janeiro!");
				break;
			case 2:
				printf("M�s de Fevereiro!");
				break;
			case 3:
				printf("M�s de Mar�o!");
				break;
			case 4:
				printf("M�s de Abril!");
				break;
			case 5:
				printf("M�s de Maio!");
				break;
			case 6:
				printf("M�s de Junho!");
				break;
			case 7:
				printf("M�s de Julho!");
				break;
			case 8:
				printf("M�s de Agosto!");
				break;
			case 9:
				printf("M�s de Setembro!");
				break;
			case 10:
				printf("M�s de Outubro!");
				break;
			case 11:
				printf("M�s de Novembro!");
				break;
			case 12:
				printf("M�s de Dezembro!");
				break;	
		}
