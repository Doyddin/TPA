/*
fun��o: Verificar (de novo)
autores: Fernando Carreira e Cesar Augusto
data de cria��o: 09/10/2019
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int n=0;
	printf("Informe qualquer n�mero entre 5 e 20:\n");
	scanf("%i",&n);
	if(n>5 and n<20){
		n=n*n*n;
		printf("Este n�mero ao cubo �: %i",n);
	}else{
		printf("N�O TA CERTO, por isso n�o pertence ao intervalo :)");
	}
}
