/*
Fun��o: Verificar com se
autor: Cesar Augusto de Almeida
data de cria��o: 05/10/2019
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int n=0;
	printf("Indique qualquer n�mero:\n");
	scanf("%i",&n);
	if(n>=100){
		printf("Este n�mero � maior, ou igual a 100!");
	}
	else{
		printf("Este n�mero � menor que 100!");
	}
}
