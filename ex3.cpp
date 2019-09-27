/*
Função: Calcular área de círculo
Autor: Cesar Augusto de Almeida
data da criação: 27/09/2019
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	const float Pi=3.14;
	float area=0.0;
	int raio=0;
	printf("Informe o valor do raio:\n");
	scanf("%i",&raio);
	area= Pi*raio*raio;
	printf("O valor da area desse círculo é de :%f",area);
	
}
