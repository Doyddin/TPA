/*
Fun��o: Calcular o pre�o de um terreno ret�ngular baseado nos metros quadrados
Autor: Cesar Augusto de Almeida
data da cria��o: 27/09/2019
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	float preco=0.00;
	int n1=0,n2=0,area=0;
	printf("Informe o valor da frente do terreno, em metros:\n");
	scanf("%i",&n1);
	printf("Informe o valor de um dos lado desse terreno, em metros:\n");
	scanf("%i",&n2);
	area=n1*n2;
	printf("Informe o pre�o do metro quadrado:\n");
	scanf("%f",&preco);
	preco=area*preco;
	printf("O valor deste terreno � de: %f",preco);
}
