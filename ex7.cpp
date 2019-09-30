/*
Função: calcular salário com aumento
autor: Cesar Augusto de Almeida
data de criação:30/09/2019
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int porcentual=0;
	float salario=0.0;
	printf("Informe o salário atual desse funcionário:\n");
	scanf("%f",&salario);
	printf("Informe o percentual do aumento:\n");
	scanf("%i",&porcentual);
	salario=salario*porcentual;
	printf("O novo salário, com o aumento, é de %.2f",salario);
}
