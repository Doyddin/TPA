/*
Fun��o: Calcular �rea de ret�ngulo
autor: Cesar Augusto de Almeida
data de cria��o: 26/09/2019
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int b=0,h=0,area=0;
	printf("Informe o valor da base:\n");
	scanf("%i",&b);
	printf("Informe o valor da altura:\n");
	scanf("%i",&h);
	area= b*h;
	printf("A �rea desse retangulo � de %i",area);
}
