/*
função: trocar valores
autores: Fernando Carreira e Cesar Augusto
data de criação: 09/10/2019
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int n=0,n1=0,troca=0;
	printf("Informe o primeiro valor a ser trocado:\n");
	scanf("%i",&n);
	printf("Informe o segundo valor a ser trocado:\n");
	scanf("%i" ,&n1);
	troca = n;
	n = n1;
	n1 = troca;
	printf("Trocado fica assim:\n %i %i", n, n1);
	
}
