/*
função: Ler o nome de um aluno, ver sua média e dizer se está aprovado.
autores: Fernando Carreira e Cesar Augusto
data de criação: 09/10/2019
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	char nome[20];
	int media=0;
		printf("Diga o seu nome: \n");
		scanf("%s",&nome);
		printf("Diga a sua média: \n");
		scanf("%i",&media);
			if(media>=7){
				printf("Boa %s você foi aprovado, parabéns!",nome);
			}
			if(media<7){
				printf("Poxa %s você foi reprovado...",nome);
			}
	}
				
			
