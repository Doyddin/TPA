/*
Função:ler o nome de 50 pessoas
Autores:Fernando Carreira e Cesar Augusto
data de criação:23/10/2019 
*/
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){
	int cont;
	char nome[40];
	for(cont=0;cont<50;cont++){
		printf("Diga teu nome:\n");
		gets(nome);
		printf("Bom dia %s\n",nome);
		system("pause");
		system("cls");
		fflush(stdin);
		if(cont==49){
			printf("Acabousse!");
		}
	}
}
