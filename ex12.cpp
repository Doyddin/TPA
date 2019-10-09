/*
função: verificar negativo,positivo,neutro
autores: Fernando Carreira e Cesar Augusto
data de criação: 09/10/2019
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int n=0;
	printf("Informe qualquer número:\n");
	scanf("%i",&n);
	if(n>0){
		printf("O número é positivo!");
	}
	if(n<0){
		printf("O número é negativo!");
	}
	if(n==0){
		printf("O número é neutro!");
	}
}
