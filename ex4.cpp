/*
Função: quadrado da soma de 3 numeros
Autor: Cesar Augusto de Almeida
data da criação: 27/09/2019
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int n1=0,n2=0,n3=0,soma=0;
	printf("Informe o primeiro valor:\n");
	scanf("%i",&n1);
	printf("Informe o segundo valor:\n");
	scanf("%i",&n2);
	printf("Informe o terceiro valor:\n");
	scanf("%i",&n3);
	soma=n1+n2+n3;
	soma = soma*soma;
	printf("O Quadrado da soma desses número é de: %i",soma);
}
