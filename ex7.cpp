/*
Fun��o: calcular sal�rio com aumento
autor: Cesar Augusto de Almeida
data de cria��o:30/09/2019
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int porcentual=0;
	float salario=0.0;
	printf("Informe o sal�rio atual desse funcion�rio:\n");
	scanf("%f",&salario);
	printf("Informe o percentual do aumento:\n");
	scanf("%i",&porcentual);
	salario=salario*porcentual;
	printf("O novo sal�rio, com o aumento, � de %.2f",salario);
}
