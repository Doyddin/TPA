/*
função: dizer se é impar ou par.
autores: Fernando Carreira e Cesar Augusto
data de criação: 16/10/2019
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int n=0;
	printf("Introduza um número:\n");
	scanf("%i",&n);
	if(n==(n/2)*2){
		printf("Este número é par");
	}else{
		printf("Este número é ímpar.");
	}
}
