/*
fun��o:Verificar um numero
autores:Fernando Carreira e Cesar Augusto
data de cria��o: 09/10/2019
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
	printf("O valor do n�mero � :%i",n);
}
