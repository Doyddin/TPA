/*
fun��o: verificar negativo,positivo,neutro
autores: Fernando Carreira e Cesar Augusto
data de cria��o: 09/10/2019
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int n=0;
	printf("Informe qualquer n�mero:\n");
	scanf("%i",&n);
	if(n>0){
		printf("O n�mero � positivo!");
	}
	if(n<0){
		printf("O n�mero � negativo!");
	}
	if(n==0){
		printf("O n�mero � neutro!");
	}
}
