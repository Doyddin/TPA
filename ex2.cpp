/*
Função: Calcular área de triangulo
autor: Cesar Augusto de Almeida
data da criação:26/09/2019
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int b=0,h=0,area=0;
	printf("Informe o valor da base do triângulo:\n");
	scanf("%i",&b);
	printf("Informe o valor da altura do triângulo:\n");
	scanf("%i",&h);
	area= b*h/2;
	printf("A área desse triãngulo é : %i",area);
}
