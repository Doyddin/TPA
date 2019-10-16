/*
função: Um programa que permita o usuário escolher um mês do ano
autores: Fernando Carreira e Cesar Augusto
data de criação: 16/10/2019
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int mes=0,certo=0;
	while(certo==0){
	printf("Insira o número do mês desejado (1-12):\n");
	scanf("%i", &mes);
		switch(mes){
			case 1:
				printf("Mês de Janeiro: 31 dias");
				certo++;
				break;
			case 2:
				printf("Mês de Fevereiro: 28 dias");
				certo++;
				break;
			case 3:
				printf("Mês de Março: 31 dias");
				certo++;
				break;
			case 4:
				printf("Mês de Abril: 30 dias");
				certo++;
				break;
			case 5:
				printf("Mês de Maio: 31 dias");
				certo++;
				break;
			case 6:
				printf("Mês de Junho: 30 dias");
				certo++;
				break;
			case 7:
				printf("Mês de Julho: 31 dias");
				certo++;
				break;
			case 8:
				printf("Mês de Agosto: 31 dias");
				certo++;
				break;
			case 9:
				printf("Mês de Setembro: 30 dias");
				certo++;
				break;
			case 10:
				printf("Mês de Outubro: 31 dias");
				certo++;
				break;
			case 11:
				printf("Mês de Novembro: 30 dias");
				certo++;
				break;
			case 12:
				printf("Mês de Dezembro: 31 dias");
				certo++;
				break;	
			default:
				printf("NÃO EXISTE O MES %i\n",mes);
				break;
		}
} 
}
