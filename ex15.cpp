/*
função: Ordenar em forma Decrescente
autores: Fernando Carreira e Cesar Augusto
data de criação: 09/10/2019
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int a=0,b=0,c=0;
		printf("Insira o seu primerio número:\n ");
		scanf("%i", &a);
		printf("Insira o seu segundo número: \n ");
		scanf("%i", &b);
		while(b==a){
			printf("INSIRA OUTRO DIFERENTE:\n");
			scanf("%i",&b);
		}
		printf("Insira o seu terceiro número: \n");
		scanf("%i", &c);
		while(c==b or c==a){
			printf("INSIRA OUTRO DIFERENTE:\n");
			scanf("%i",&c);
		}
		if(a>b and a>c){
			if(b>c){
				printf("A ordem numérica é:\n %i %i %i ",a,b,c);	
			}else{
				printf("A ordem númerica é:\n %i  %i  %i ",a,c,b);
			}
		}
		if(b>a and b>c){
			if(a>c){
			
			printf("A ordem númerica é:\n %i  %i  %i ",b,a,c);
			}else{
				printf("A ordem númerica é:\n %i  %i  %i ",b,c,a);
			}
		}
		if(c>a and c>b){
			if(a>b){
				printf("A ordem númerica é:\n %i %i %i ", c,a,b);
			}else{
				printf("A ordem númerica é:\n %i %i %i ", c,b,a);
			}
		}
	}
