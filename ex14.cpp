/*
fun��o: mostrar o maior entre 3
autores: Fernando Carreira e Cesar Augusto
data de cria��o: 09/10/2019
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int n1=0,maior=0,c=0;
	while(c<3){
		printf("Insira um n�mero:\n");
		scanf("%i", &n1);
		if(c==0){
			maior=n1;
		}
		if(maior<n1){
			maior=n1;
		}
		c++;
	}
	printf("Maior n�mero deles �: %i",maior);
}
