/*
fun��o: Ler o nome de um aluno, ver sua m�dia e dizer se est� aprovado.
autores: Fernando Carreira e Cesar Augusto
data de cria��o: 09/10/2019
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	char nome[20];
	int media=0;
		printf("Diga o seu nome: \n");
		scanf("%s",&nome);
		printf("Diga a sua m�dia: \n");
		scanf("%i",&media);
			if(media>=7){
				printf("Boa %s voc� foi aprovado, parab�ns!",nome);
			}
			if(media<7){
				printf("Poxa %s voc� foi reprovado...",nome);
			}
	}
				
			
