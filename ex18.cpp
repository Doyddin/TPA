/*
fun��o: dizer se � impar ou par.
autores: Fernando Carreira e Cesar Augusto
data de cria��o: 16/10/2019
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int n=0;
	printf("Introduza um n�mero:\n");
	scanf("%i",&n);
	if(n==(n/2)*2){
		printf("Este n�mero � par");
	}else{
		printf("Este n�mero � �mpar.");
	}
}
