/*
função: Classificar a Categoria de um nadador
autores: Fernando Carreira e Cesar Augusto
data de criação: 09/10/2019
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int a=0;
	printf("Introduza a sua idade: \n");
	scanf("%i", &a);
		if(a>=5 and a<=11){
		}
			printf("Categoria Infantil.");
		if(a>=12 and a<=17){
			printf("Categoria Juvenil.");
		}
		if(a>=18){
			printf("Categoria Adulto.");
		}
}
