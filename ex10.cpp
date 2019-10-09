/*
função:Verificar um numero
autores:Fernando Carreira e Cesar Augusto
data de criação: 09/10/2019
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int n=0;
	printf("Indique qualquer valor:\n");
	scanf("%i",&n);
	if(n>100){
		n=n+150;
	}
	printf("O valor do número é :%i",n);
}
