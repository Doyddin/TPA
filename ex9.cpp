/*
Função: Verificar com se
autor: Cesar Augusto de Almeida
data de criação: 05/10/2019
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int n=0;
	printf("Indique qualquer número:\n");
	scanf("%i",&n);
	if(n>=100){
		printf("Este número é maior, ou igual a 100!");
	}
	else{
		printf("Este número é menor que 100!");
	}
}
