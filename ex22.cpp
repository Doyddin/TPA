/*
fun��o: Um programa que permita o usu�rio escolher um m�s do ano
autores: Fernando Carreira e Cesar Augusto
data de cria��o: 16/10/2019
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int mes=0,certo=0;
	while(certo==0){
	printf("Insira o n�mero do m�s desejado (1-12):\n");
	scanf("%i", &mes);
		switch(mes){
			case 1:
				printf("M�s de Janeiro: 31 dias");
				certo++;
				break;
			case 2:
				printf("M�s de Fevereiro: 28 dias");
				certo++;
				break;
			case 3:
				printf("M�s de Mar�o: 31 dias");
				certo++;
				break;
			case 4:
				printf("M�s de Abril: 30 dias");
				certo++;
				break;
			case 5:
				printf("M�s de Maio: 31 dias");
				certo++;
				break;
			case 6:
				printf("M�s de Junho: 30 dias");
				certo++;
				break;
			case 7:
				printf("M�s de Julho: 31 dias");
				certo++;
				break;
			case 8:
				printf("M�s de Agosto: 31 dias");
				certo++;
				break;
			case 9:
				printf("M�s de Setembro: 30 dias");
				certo++;
				break;
			case 10:
				printf("M�s de Outubro: 31 dias");
				certo++;
				break;
			case 11:
				printf("M�s de Novembro: 30 dias");
				certo++;
				break;
			case 12:
				printf("M�s de Dezembro: 31 dias");
				certo++;
				break;	
			default:
				printf("N�O EXISTE O MES %i\n",mes);
				break;
		}
} 
}
