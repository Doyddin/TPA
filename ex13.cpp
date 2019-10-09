/*
função: Verificar (de novo)
autores: Fernando Carreira e Cesar Augusto
data de criação: 09/10/2019
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int n=0;
	printf("Informe qualquer número entre 5 e 20:\n");
	scanf("%i",&n);
	if(n>5 and n<20){
		n=n*n*n;
		printf("Este número ao cubo é: %i",n);
	}else{
		printf("NÃO TA CERTO, por isso não pertence ao intervalo :)");
	}
}
